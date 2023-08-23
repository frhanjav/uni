// WAP that creates a file and inserts some contents provided by the user at runtime

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char fileName[100];
    char content[1000];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    printf("Enter the content (terminate with Ctrl+D):\n");
    fflush(stdin); // Clear the input buffer

    // Read and write contents until EOF (Ctrl+D)
    while (fgets(content, sizeof(content), stdin) != NULL) {
        fputs(content, file);
    }

    // Close the file
    fclose(file);

    printf("Contents inserted into the file successfully.\n");

    return 0;
}