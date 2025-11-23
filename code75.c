//Add two matrices.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols];

    // Read first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Read second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Print sum directly
    printf("Sum of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", A[i][j] + B[i][j]);
        printf("\n");
    }

    return 0;
}
