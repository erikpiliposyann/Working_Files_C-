#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFSIZE 1024

int main(){
	int w_fd = open("./b.txt",O_WRONLY);
	
	if (w_fd == -1) {
        printf("b.txt doesn't open\n");
        return 1;
    }

	int r_fd = open("./a.txt",O_RDONLY);
	
	
    if (r_fd == -1) {
        printf("a.txt doesn't open\n");
        return 1;
    }

	char buff[BUFFSIZE] = {0};
	int sizebuff = 0;
	int count = 0;
	while((sizebuff = read(r_fd,buff,BUFFSIZE)) > 0){
		for(int i = 0; i < sizebuff; ++i){
			if(buff[i] >= '0' && buff[i] <= '9'){
				count++;
			}						
		}
	}
	char result[20];
	int len = sprintf(result, "%d\n", count);
	write(w_fd, result, len);
	
	close(r_fd);
	close(w_fd);
	return 0;
}

