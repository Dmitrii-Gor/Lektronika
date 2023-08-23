#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define ROWS 5
#define COLS 5

int matrix[ROWS][COLS] =
{
    { 1, 0, 0, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }

};

int new_generation_matrix[ROWS][COLS];
void create_matrix(void)
{
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            matrix[i][j] = 0;
        }
    }
}


void set_matrix_population(int counter_life)
{
    srand(time(NULL));
    int counter = 0;
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            if(counter == counter_life) // огранчение на 20 единичек в матрице
            {
                break;
            }
            matrix[i][j] = rand()%2;
            if(matrix[i][j] == 1)
            {
                counter++;
            }
        }
    }
}


void show_matrix(void)
{
    printf("====================\n");
    for(int i = 0; i < ROWS; i++)
    {
        for(int j=0; j < COLS; j++)
        {
            if(matrix[i][j] == 1)
            {
                printf(" * ");
            }
            else
            {
                printf(" . ");
            }
        }
        printf("\n");
    }
    printf("\n====================\n");
}


int check_cell_neighbour(int cell_index_x, int cell_index_y)
{
   int counter = 0, counter_alive_cell = 0, x, y;

   for(int i = -1; i <= 1; i++)
   {
        for(int j = -1; j<=1; j++)
        {
            x = (cell_index_x + j + ROWS) % ROWS;
            y = (cell_index_y + i + COLS) % COLS;
            counter++;
            if(counter != 5 && matrix[x][y] == 1) // ячейка которую мы передали находится под 5 номером
            {
               counter_alive_cell++;
            }
        }
   }
    return counter_alive_cell;
}


bool cell_state_next_generation(int cell_index_x, int cell_index_y)
{
    int counter_alive_cell;
    counter_alive_cell = check_cell_neighbour(cell_index_x, cell_index_y);
    if(matrix[cell_index_x][cell_index_y] == 0 && counter_alive_cell == 3)
    {
        return 1;
    }
    if(matrix[cell_index_x][cell_index_y] == 1 && (counter_alive_cell >= 2 && counter_alive_cell <= 3))
    {
        return 1;
    }
    return 0;
}


void check_new_generation(void)
{
    for(int i = 0; i< ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
        {
            new_generation_matrix[i][j] = cell_state_next_generation(i, j);
        }
    }
}


void save_new_generation(void)
{
    for(int i = 0; i< ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
        {
            matrix[i][j] = new_generation_matrix[i][j];
        }
    }
}

int main()
{
    int counter_life = 3;

    //create_matrix();
    //set_matrix_population(counter_life);
    show_matrix();
    check_new_generation();
    save_new_generation();
    show_matrix();
    check_new_generation();
    save_new_generation();
    show_matrix();

    return 1;
}

