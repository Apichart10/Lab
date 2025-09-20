#include<stdio.h>
int ShowMatrix(int A[3][3],int row,int col)
{   int i,j;
    for( i = 0 ; i < row ; i++)
    {   for(j=0;j<col;j++)
        printf("%4d",A[i][j]);
        printf("\n");
    }
}

    
int main()
{
   int row = 3,col =3 ;
   int A[3][3] ={{9,8,7},
                {6,5,4},
                {1,2,3}};
ShowMatrix(A,row,col);
}