<<<<<<< HEAD
#include <stdio.h>

int main(void){
	
	int input1[5];
	int a,b,c;
	a = 0;
	for(int i = 0;i<5;i++){
		scanf("%d",&input1[i]);
	}
	
	for(int i = 0;i<5;i++){
		a = a + input1[i] * input1[i];
	}

	printf("%d",a%10);
	
=======
#include <stdio.h>

int main(void){
	
	int input1[5];
	int a,b,c;
	a = 0;
	for(int i = 0;i<5;i++){
		scanf("%d",&input1[i]);
	}
	
	for(int i = 0;i<5;i++){
		a = a + input1[i] * input1[i];
	}

	printf("%d",a%10);
	printf("yeas");
	
>>>>>>> 313863b4b7c733e7e6449ff6f14fa341662d37f0
}