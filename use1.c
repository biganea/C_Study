#include <stdio.h>

typedef struct HNODE{
	int cnt;
	struct DNODE *Front;
	struct DNODE *Rear;
}HeadNode;

typedef struct DNODE{
	char std_num;
	char name;
	char major;
	int midterm;
	int final;
	int report;
	int attend;
	int average;
	struct DNODE *Next;
	struct DNODE *Prev;
}DataNode;

HeadNode Head;

void init(){

	printf("1.데이터 출력");
	printf("2.데이터 추가");
	printf("3.데이터 검색");
	printf("4.데이터 수정");
	printf("5.종료");

}
void get_num(int input){


	if(input==1){
	printf("1.전체 데이터 출력(입력순)");
	printf("2.이름으로 정렬 후 출력");
	printf("3.학번으로 정렬 후 출력");
	printf("4.학과으로 정렬 후 출력");
	printf("5.총점으로 정렬 후 출력");
	}
	else if(input==2){


	}
	else if(input==3){
	printf("1.이름으로 검색");
	printf("2.이름으로 검색");
	printf("3.학과로 검색");
	printf("4.입력 번호로 검색");

	}
	else if(input==4){
	printf("1.이름으로 검색 후 수정");
	printf("2.학번으로 검색 후 수정");
	printf("3.입력(block) 번호로 검색");
	}
	else if(input==5){
	return;
	}
}



int main(void){

	Head.cnt = 0;
	Head.Front = NULL;
	Head.Rear = NULL;

	int input;

	init();

	scanf("%d",&input);
	get_num(input);
}