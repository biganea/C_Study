#include <stdio.h>
#include <string.h>

int main(void){
	
	int scan1,i;
	char scan2[30];
	int scan3;
	int stack[10] = {-1,};
	
	scanf("%d",&scan1);
	while (getchar() != '\n');
	scanf("%s",scan2);
	if(strcmp(scan2,"push") == 0){
		scanf("%d",&scan3);
	}
	printf("%s\n",scan2);
	printf("%d\n",scan3);
}

