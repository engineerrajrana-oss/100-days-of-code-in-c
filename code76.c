//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {  // check only upper triangle
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
