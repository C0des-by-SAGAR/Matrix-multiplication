# Matrix-multiplication
# Matrix Multiplication Program

This C program performs matrix multiplication of two matrices, matrix A and matrix B. It takes user input for the dimensions and elements of these matrices, checks if multiplication is possible, and then calculates and displays the resulting product matrix. Below is a detailed documentation of the code:

## Prerequisites

Before you can use this program, you need to have a C compiler installed on your system, such as GCC.

## Instructions

1. Compile the program using a C compiler. For example, if you are using GCC, you can compile the code with the following command:

   ```
   gcc matrix_multiplication.c -o matrix_multiplication
   ```

2. Run the compiled program:

   ```
   ./matrix_multiplication
   ```

3. Follow the prompts to input the dimensions and elements of matrices A and B. The program will then calculate and display the product matrix if multiplication is possible.

## Code Explanation

```c
#include<stdio.h>
#include<conio.h>
```

These are the necessary header files for input and output operations.

```c
void main()
{
    int r1, r2, c1, c2, i, j;
```

Define integer variables `r1`, `r2`, `c1`, `c2`, `i`, and `j` to store the dimensions and loop counters.

```c
    printf("\nEnter the no. of rows and columns of matrix A: \n");
    scanf("%d%d",&r1,&c1);
```

Prompt the user to input the dimensions of matrix A (number of rows and columns) and store them in `r1` and `c1`.

```c
    int matA[r1][c1];
    printf("\nEnter the elements of matrix A: \n");
```

Declare a 2D array `matA` to store matrix A and prompt the user to input its elements.

```c
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\tA[%d][%d]= ",i,j);
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
```

Use nested loops to read and store each element of matrix A.

```c
    printf("\nmatrix A= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",matA[i][j]);
        }
        printf("\n");
    }
```

Display the matrix A to the user.

```c
    printf("\nEnter the no. of rows and columns of matrix B: \n");
    scanf("%d%d",&r2,&c2);
```

Prompt the user to input the dimensions of matrix B (number of rows and columns) and store them in `r2` and `c2`.

```c
    int matB[r2][c2];
    printf("\nEnter the elements of matrix B: \n");
```

Declare a 2D array `matB` to store matrix B and prompt the user to input its elements.

```c
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\tB[%d][%d]= ",i,j);
            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
```

Use nested loops to read and store each element of matrix B.

```c
    printf("\nmatrix B= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",matB[i][j]);
        }
        printf("\n");
    }
```

Display the matrix B to the user.

```c
    // Multiplication
    if(c1!=r2) {
        printf("Multiplication Not Possible; as No. of Columns of matrix A not equal to No. of Rows of matrix B");
    }
    else {
```

Check if matrix multiplication is possible by comparing the number of columns in matrix A (`c1`) with the number of rows in matrix B (`r2`).

```c
        int pro[r1][c2]; int sum=0;
```

Declare a 2D array `pro` to store the product matrix and an integer variable `sum` to accumulate the product of elements during multiplication.

```c
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
```

Perform matrix multiplication using nested loops and store the result in the `pro` array.

```c
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
```

Display the product matrix if multiplication is possible.

```c
    getch();
}
```

Use `getch()` to wait for user input before exiting the program.
