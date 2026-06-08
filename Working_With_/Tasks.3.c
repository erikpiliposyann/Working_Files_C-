#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    char fname[50];
    char name[50];

    printf("File name: ");
    scanf("%49s", fname);

    printf("Input your name: ");
    scanf("%49s", name);

    int fd = open(fname, O_RDWR);

    if (fd == -1) {
        printf("File doesn't open\n");
        return 1;
    }

	pwrite(fd, name, strlen(name), 7);
	pwrite(fd, "!\n", 1, 7 + strlen(name));
	close(fd);
	return 0;
}
