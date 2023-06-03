#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    i = 1;
    start:

    if (i <= rows) {
        j = 1;
        print_spaces:
        if (j <= rows - i) {
            printf(" ");
            j++;
            goto print_spaces;
        }

        j = 1;
        print_stars:
        if (j <= 2 * i - 1) {
            printf("*");
            j++;
            goto print_stars;
        }

        printf("\n");
        i++;
        goto start;
    }

    return 0;
}