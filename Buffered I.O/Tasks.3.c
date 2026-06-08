#define BUFFSIZE 1024

char buffer[BUFFSIZE];

int main(){
	FILE* stream = fopen("Filee.txt", "r");
	
	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

	while(fgets(buffer,BUFFSIZE,stream)){
		printf("%s\n", buffer);
	}

	fclose(stream);
	return 0;
}
