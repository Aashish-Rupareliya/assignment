//
//  main.c
//  2d matrix
//
//  Created by apple on 01/05/23.
//

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], diff[rows][cols], product[rows][cols];
    
    printf("Enter the elements of first matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter the elements of second matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Perform addition
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Perform subtraction
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    
    // Perform multiplication
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            product[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("Difference of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    printf("Product of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
