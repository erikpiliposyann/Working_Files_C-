#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	char name[50];

	printf("File name:");
	scanf("%s", name);

	int fd = 0;
	
	fd = creat(name,0644);

	if(fd == -1){
		printf("File dont create.");
	}

	write(fd,"Hello World.\n",12);

	close(fd);

	return 0;
}
