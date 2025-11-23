//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal Traversal:\n");

    // Traverse diagonals starting from first row
    for(i = 0; i < cols; i++) {
        int x = 0, y = i;
        while(x < rows && y >= 0) {
            printf("%d ", matrix[x][y]);
            x++;
            y--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from first column (except the first element)
    for(i = 1; i < rows; i++) {
        int x = i, y = cols - 1;
        while(x < rows && y >= 0) {
            printf("%d ", matrix[x][y]);
            x++;
            y--;
        }
        printf("\n");
    }

    return 0;
}
