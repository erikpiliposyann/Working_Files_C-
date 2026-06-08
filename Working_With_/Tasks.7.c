#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define BUFFSIZE 1024

char buf[BUFFSIZE];

int main() {
    FILE* stream = fopen("./filee.txt", "r");

    if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

    fseek(stream, 0, SEEK_END);
    int size = ftell(stream);
    fseek(stream, 0, SEEK_SET);

    printf("The size of file is: %d\n", size);

    int lines = 0;

    while (fgets(buf, BUFFSIZE, stream) != NULL) {
        lines++;
    }

    printf("The line count of file is: %d\n", lines);

    fseek(stream, 0, SEEK_SET);

    char* buffer = calloc(size + 1, sizeof(char));

    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        fclose(stream);
        return 1;
    }

    fread(buffer, sizeof(char), size, stream);

    int count[26] = {0};

    for (int i = 0; i < size; ++i) {
        if (buffer[i] >= 'a' && buffer[i] <= 'z') {
            count[buffer[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        printf("%c -> %d\n", 'a' + i, count[i]);
    }

    free(buffer);
    fclose(stream);

    return 0;
}
