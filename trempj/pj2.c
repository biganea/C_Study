#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
int main(void) 
{
	char input1[10];
	int user_say = 10;
	int win,loss,draw;
	win = 0;
	loss = 0;
	draw = 0;
	while(1){
		
	printf("가위바위보 : ");
	scanf("%s",input1);
	if(strcmp(input1,"가위") == 0){
		user_say = 0;
	}
	else if(strcmp(input1,"바위") == 0){
		user_say = 1;
	}
	else if(strcmp(input1,"보") == 0){
		user_say = 2;
	}
	srand(time(NULL));
	int random = rand() % 3;

	if(user_say == 0){
		if(random == 1){
			printf("패배\n");
			loss++;
			break;
		}
		if(random == 2){
			printf("승리\n");
			win++;
		}
		if(random == 0){
			printf("무승부\n");
			draw++;
		}
	}
	
	else if(user_say == 1){
		if(random == 2){
			printf("패배\n");
			loss++;
			break;
		}
		if(random == 0){
			printf("승리\n");
			win++;
		}
		if(random == 1){
			printf("무승부\n");
			draw++;
		}
	}

	else if(user_say == 2){
		if(random == 0){
			printf("패배\n");
			loss++;
			break;
		}
		if(random == 1){
			printf("승리\n");
			win++;
		}
		if(random == 2){
			printf("무승부\n");
			draw++;
		}
	}
}
	printf("%d승 %d패 %d무",win,loss,draw);
}

// https://reakwon.tistory.com/63