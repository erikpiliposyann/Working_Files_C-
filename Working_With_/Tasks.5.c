#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void lowerCase(char *buf){
	if(*buf >= 'A' && *buf <= 'Z')
		*buf ^= 32;
}

int main(){
	char path_name[50];

    printf("File name: ");
    scanf("%49s", path_name);

    int read_fd = open(path_name, O_RDONLY);
	
	if (read_fd == -1) {
        printf("File doesn't open\n");
        return 1;
 	}

	int write_fd = open(path_name, O_WRONLY);
     
    if (write_fd == -1) {
    	printf("File doesn't open\n");
      	return 1;
    }

	char buf;
	while(read(read_fd,&buf,1) > 0){
		lowerCase(&buf);
		write(write_fd,&buf,1);
	}
	close(write_fd);
	close(read_fd);

	return 0;
}
