#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    fptr = fopen("LNMIITSTUDENT.DAT", "a");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the information to append to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(fptr, "%s", data);
    fclose(fptr);

    printf("Data successfully appended to the file.\n");
    return 0;
}
