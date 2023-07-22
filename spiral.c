#include<stdio.h>



#if 1
#define ROWS 6
#define COLS 8
   int matrix[ROWS][COLS] =
    {

        { 1,  2,  3,  4,  5,  6,  7,  8},
        { 9, 10, 11, 12, 13, 14, 15, 16},
        {17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32},
        {33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48}
    };
#endif

#if 0
#define ROWS 5
#define COLS 3
   int matrix[ROWS][COLS] =
   {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
      {10,11,12},
      {13,14,15}
   };
#endif

#if 0
#define ROWS 1
#define COLS 4
   int matrix[ROWS][COLS] =
   {
      {1,2,3,4}
   };
#endif

int top=0, bottom=ROWS-1, left=0, right=COLS-1;

void show_upper_row(int row, int col_from, int col_to)
{
    for(int i=col_from; i<=col_to; i++)
    {
        printf("%d\t", matrix[row][i]);
    }
    top++;
}

void show_lower_row(int row, int col_from, int col_to)
{
    for(int i=col_from; i>col_to; i--)
    {
        printf("%d\t", matrix[row][i]);
    }
    bottom--;
}

void show_right_col(int col, int row_from, int row_to)
{
    for(int i=row_from; i<=row_to; i++)
    {
         printf("%d\t", matrix[i][col]);
    }
  right--;
}

void show_left_col(int col, int row_from, int row_to)
{
    for(int i=row_from; i>= row_to; i--)
    {
        printf("%d\t", matrix[i][col]);
    }
   left++;
}

int main()
{


    int sycle_counter = ROWS > COLS ? COLS : ROWS;

    for(int i=0; i<sycle_counter/2+1;i++)
    {

      if(top==bottom)
      {
          show_upper_row(i, i, COLS-i-1);
          break;
      }
      show_upper_row(i, i, COLS-i-1);
       if(right==left)
      {
          show_right_col(COLS-i-1, i+1, ROWS-i-1);
          break;
      }

        show_right_col(COLS-i-1, i+1, ROWS-i-1);
        show_lower_row(ROWS-i-1, COLS-i-2, i);
        show_left_col(i, ROWS-i-1, i+1);


    }

    return 0;
}
