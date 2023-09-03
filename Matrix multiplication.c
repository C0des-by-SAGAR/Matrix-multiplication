#include<stdio.h>
#include<conio.h>
void main()
{
    int r1, r2, c1, c2, i, j;
    printf("\nEnter the no. of rows and columns of matrix A: \n");
    scanf("%d%d",&r1,&c1);
    int matA[r1][c1];
    printf("\nEnter the elements of matrix A: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\tA[%d][%d]= ",i,j);
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix A= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",matA[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the no. of rows and columns of matrix B: \n");
    scanf("%d%d",&r2,&c2);
    int matB[r2][c2];
    printf("\nEnter the elements of matrix A: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\tB[%d][%d]= ",i,j);
            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix B= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",matB[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    if(c1!=r2) {
        printf("Multiplication Not Possible; as No. of Columns of matrix A not equal to No. of Rows of matrix B");
    }
    else {
        int pro[r1][c2]; int sum=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(int k=0;k<r1;k++)
                sum=sum+(matA[i][k]*matB[k][j]);
                pro[i][j]=sum;
                sum=0;
            }
        }

        printf("\nProduct Matrix= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",pro[i][j]);
        }
        printf("\n");
    }
    }
    getch();
}