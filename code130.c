//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int roll, n;
    float marks;

    // Open file in write mode
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Write student records to file
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);
    printf("\nData successfully written to students.txt!\n");

    // Reopen file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error! Unable to open file for reading.\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    printf("-------------------------\n");
    printf("Name\tRoll\tMarks\n");

    // Read and display student records
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%s\t%d\t%.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
