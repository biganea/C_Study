#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) 
{
	char input1[10];
	int win,loss,draw;
	win = 0;
	loss = 0;
	draw = 0;
	while(1){
		
		printf("가위바위보 : ");
		scanf("%s",input1);
		
		srand(time(NULL));
		int random = rand() % 3;
		
		if(random==0){
			printf("승리\n");
			win++;
		}
		else if(random==1){
			printf("패배\n");
			loss++;
			break;
		}
		else if(random==2){
			printf("무승부\n");
			draw++;
		}
	}
	printf("%d승 %d패 %d무",win,loss,draw);
}
