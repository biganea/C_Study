#include <stdio.h>

int main(void){
	int i,k;

	int arr[5][5] = {{1,2,3,4,5},
									{6,7,8,9,10},
									{11,12,13,14,15},
									{16,17,18,19,20},
									{21,22,23,24,25}};

	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			printf("%d ",arr[i][k]);
		}
		printf("\n");
	}
			printf("\n");
	for(i=4;i>=0;i--){
		for(k=0;k<5;k++){
			printf("%d ",arr[k][i]);
		}
		printf("\n");
	}
		printf("\n");
	
	for(i=4;i>=0;i--){
		for(k=4;k>=0;k--){
			printf("%d ",arr[i][k]);
		}
		printf("\n");
	}
		printf("\n");
	
	for(i=0;i<5;i++){
		for(k=4;k>=0;k--){
			printf("%d ",arr[k][i]);
		}
		printf("\n");
	}

}