#include <stdio.h>

int main(){
	FILE* stream = fopen("Filee.txt", "w");
	
	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

	fprintf(stream, "Hello world!\n");
	fclose(stream);

	FILE* r_stream = fopen("Filee.txt", "r");

	if (r_stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }
	char ch;
	while ((ch = fgetc(r_stream)) != EOF) {
        printf("%c", ch);
    }

	fclose(r_stream);

	return 0;
}
