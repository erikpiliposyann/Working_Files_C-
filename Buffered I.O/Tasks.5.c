#include <stdio.h>
#define MAX_PLAYERS 20
#define NAME_SIZE 50
#define TOP_COUNT 5

typedef struct player{
	char name[NAME_SIZE];
	int score;
}Player;


int main(){
	FILE* file = fopen("Players.txt", "w");

	if(file == NULL){
		printf("File doesn't open\n");
        return 1;
	}
	
    fprintf(file, "Aram 12\n");
    fprintf(file, "Ani 123\n");
    fprintf(file, "Gor 323\n");
    fprintf(file, "Karen 310\n");
    fprintf(file, "Mane 130\n");
    fprintf(file, "David 400\n");
    fprintf(file, "Narek 150\n");
    fprintf(file, "Lilit 270\n");

    fclose(file);

    file = fopen("Players.txt", "r");
	
	if (file == NULL) {
        printf("File doesn't open\n");
        return 1;
    }

	Player players[MAX_PLAYERS];
	int count = 0;

	while((fscanf(file,"%s %d", players[count].name, &players[count].score)== 2)){
		count++;
	}

	for(int i = 0; i < count-1; ++i){
		for(int j = 0; j < count-1-i; ++j){
			if(players[j].score < players[j + 1].score){
				Player tmp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = tmp;
			}
		}
	}

	printf("Top 5 players:\n");

    int limit = TOP_COUNT;

    if (count < TOP_COUNT) {
        limit = count;
    }

    for (int i = 0; i < limit; ++i) {
        printf("%d. %s - %d\n", i + 1, players[i].name, players[i].score);
    }
	return 0;
}


