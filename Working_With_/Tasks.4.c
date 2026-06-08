#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	char path_name[50];

    printf("File name: ");
    scanf("%49s", path_name);

    int read_fd = open(path_name, O_RDONLY);
	
	if (read_fd == -1) {
        printf("File doesn't open\n");
        return 1;
    }
	char ch;
	printf("Input Character.");
	scanf(" %c", &ch);
	
	char buf;
	int count = 0;

	while(read(read_fd,&buf,1) > 0){
		if(buf == ch){
			count++;
		}
	}
	printf("Count = %d\n", count);

    close(read_fd);
	return 0;
}
