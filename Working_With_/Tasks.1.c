#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>nm

int main(){
	char name[50];

    printf("File name: ");
    scanf("%s", name);

    int fd = open(name, O_WRONLY);
	
	if (fd == -1) {
        printf("File dos't open.\n");
        return 1;
	}

	write(fd,"Hello world\n",12);
	close(fd);

	return 0;
}
