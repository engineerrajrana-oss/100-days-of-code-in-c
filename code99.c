//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[15], month[3], newDate[20];
    char months[][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                        "Jul","Aug","Sep","Oct","Nov","Dec"};
    int mm;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  // or use fgets(date, 15, stdin);

    // Extract month part from input
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    mm = atoi(month); // convert month string to integer (e.g. "04" → 4)

    // Print date in new format
    printf("New date format: %.2s-%s-%s\n", date, months[mm - 1], &date[6]);

    return 0;
}
