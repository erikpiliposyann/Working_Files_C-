#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#define BUFFSIZE 1024

char buf[BUFFSIZE];

int main(){
	FILE* stream = fopen("./a.txt", "r");
	
	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }
	int count_of_word = 0;
	int in_the_word = 0;

	while(fgets(buf, BUFFSIZE, stream) != NULL) {
		for(int i = 0; buf[i] != '\0'; ++i){
			if(isspace((unsigned char)buf[i])){
				in_the_word = 0;
			}
			else{
				if(in_the_word == 0){
					count_of_word++;
					in_the_word = 1;
				}
			}
		}
	}
	printf("Count of words is %d\n", count_of_word);
	fclose(stream);

	return 0;
}
