#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	FILE* stream1 = fopen("a.txt", "r");
	FILE* stream2 = fopen("b.txt", "w");
	
	if (stream1 == NULL) {
        printf("File doesn't open\n");
        return 1;
    }
	if (stream2 == NULL){ 
		printf("File doesn't open\n");
        fclose(stream1);
		return 1;
    }
	
	fseek(stream1, 0, SEEK_END);
    int size = ftell(stream1);
    fseek(stream1, 0, SEEK_SET);
	
	char* buffer = calloc(size + 1, sizeof(char));
	
	if (buffer == NULL) {
   		printf("Memory allocation failed\n");
    	fclose(stream1);
    	fclose(stream2);
    	return 1;
	}
	fread(buffer, sizeof(char), size, stream1);
	
	for(int i = size - 1; i >= 0; --i){
		fprintf(stream2, "%c", buffer[i]);
	}

	fclose(stream1);
	fclose(stream2);
	free(buffer);

	return 0;
}

