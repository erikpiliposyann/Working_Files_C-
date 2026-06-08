#include <stdio.h>
#define BUFFSIZE 1024

char buffer[BUFFSIZE];

int main(){
	FILE* stream = fopen("Filee.txt", "r");
	
	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }
	fgets(buffer, BUFFSIZE, stream);
	fseek(stream, 0, SEEK_SET);
	fgets(buffer, BUFFSIZE, stream);

	printf("Second read: %s\n", buffer);

    fclose(stream);

	return 0;
}
