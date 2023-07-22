#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int move_X[8] = {1,2,2,1,-1,-2,-2,-1};
int move_Y[8] = {2,1,-1,-2,-2,-1,1,2};

void Print_matrix(int matrix[][SIZE])
{
    for(int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int is_move_valid(int matrix[][SIZE], int position_x, int position_y, int counter_move)
{
    if(counter_move > SIZE*SIZE)
    {
        return 2; // наше поле пройдено программа может завершится
    }
    if(position_x<0 || position_y<0 || position_x > SIZE-1 || position_y > SIZE-1 || matrix[position_x][position_y] != 0)
    {
        return -1; // ход не подходит
    }
    else
    {
        return 1; // Ход подходит
    }
}

void Horse_move(int matrix[][SIZE], int x0, int y0, int counter_move)
{
    int x_new, y_new;
    matrix[x0][y0] = counter_move++;
    for(int i = 0; i < 8; i++)
    {
    x_new = x0 + move_X[i];
    y_new = y0 + move_Y[i];

    int flag = is_move_valid(matrix, x_new, y_new,counter_move);
    if(flag == 2)
    {
        Print_matrix(matrix);
        exit(0);
    }
    if(flag == -1)
    {
        continue;
    }
    Horse_move(matrix, x_new, y_new, counter_move);
    matrix[x_new][y_new] = 0;
    }
}


int main()
{
    int mat[SIZE][SIZE] = {};
    Horse_move(mat, 2, 2, 1);
    return 0;
}
