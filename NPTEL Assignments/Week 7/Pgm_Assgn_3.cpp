#include <stdio.h>
int main()
{
    int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    scanf("%d",&row); 
    scanf("%d",&col); 
 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }

for(i=0; i<row; i++)
      {
          for(j=0; j<col; j++)
          {

              matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
          }
      }

      for(i=0; i<row; i++)
      {
          for(j=0; j<col; j++)
          {
              printf("%d ", matrix_C[i][j]);
          }
          printf("\n");
      }
      return 0;
}
