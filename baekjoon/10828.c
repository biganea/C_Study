#include <stdio.h>
#include <string.h>
#define N_MAX_SIZE 10000
#define input_MAX_SIZE 10000
int set = 0;
int cut = 0;
int prt[N_MAX_SIZE] = {-1,};
int push(int stack[N_MAX_SIZE],int input1){
	stack[set] = input1;
	set++;
}
int pop(int stack[N_MAX_SIZE]){
	if (set-1 < 0){
		prt[cut] = -1;
		cut++;
	}
	else{
		prt[cut] = stack[set-1];
		cut++;
		stack[set-1] = -1;
		set--;
		}
}
int size(int stack[N_MAX_SIZE]){
	prt[cut] = set;
	cut++;
}
int empty(int stack[N_MAX_SIZE]){
	if (stack[0] == -1){
		prt[cut] = 1;
		cut++;
	}
	else{
		prt[cut] = 0;
		cut++;
	}
}
int top(int stack[N_MAX_SIZE]){
	if (set-1 < 0){
		prt[cut] = -1;
		cut++;
	}
	else {
		prt[cut] = stack[set-1];
		cut++;
	}
}
int main(void){
	
	int scan1,i;
	char scan2[30];
	int scan3;
	int stack[N_MAX_SIZE] = {-1,};
	
	scanf("%d",&scan1);
	while (getchar() != '\n');
	for(i=0;i<scan1;i++){
		scanf("%s",scan2);
		if(strcmp(scan2,"push") == 0){
			scanf("%d",&scan3);
			push(stack,scan3);
		}
		else if(strcmp(scan2,"top") == 0){
			top(stack);
		}
		else if(strcmp(scan2,"pop") == 0){
			pop(stack);
		}
		else if(strcmp(scan2,"size") == 0){
			size(stack);
		}
		else if(strcmp(scan2,"empty") == 0){
			empty(stack);
		}
	}
	
	for(i=0;i<cut;i++){
		printf("%d\n",prt[i]);
	}
}
