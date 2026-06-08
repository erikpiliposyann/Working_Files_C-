#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* stream = fopen("Filee.txt", "r");
	
	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

	fseek(stream, 0, SEEK_END);
    int size = ftell(stream);
    fseek(stream, 0, SEEK_SET);

	char* user_buffer = malloc(size * sizeof(char));

    if (user_buffer == NULL) {
        printf("Memory allocation failed\n");
        fclose(stream);
        return 1;
    }

	if (setvbuf(stream, user_buffer, _IOFBF, size) != 0) {
        printf("setvbuf failed\n");
        fclose(stream);
        return 1;
    }
	int ch;

	while((ch = fgetc(stream)) != EOF){
		putchar(ch);
	}

	fclose(stream);
	free(user_buffer);

	return 0;
}

