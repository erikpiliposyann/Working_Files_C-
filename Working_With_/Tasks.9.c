#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int factorial(int);

int main(){
	FILE* stream = fopen("factorials.txt", "w");

	if (stream == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

	int n = 0;
	printf("Input your number.");
	scanf("%i", &n);
	
	for(int i = 0; i <= n; ++i){
		fprintf(stream, "%d", factorial(i));

        if (i != n) {
            fprintf(stream, ", ");
        }
	}
	fclose(stream);
	return 0;
}

int factorial(int n){
	if(n == 1 || n == 0){
		return 1;
	}

	return n * factorial(n-1);
}
