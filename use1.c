#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct HNODE{
	int cnt;
	struct DNODE *Front;
	struct DNODE *Rear;
}HeadNode;

typedef struct DNODE{ 
	char std_num[9];
	char name[12];
	char major[4];
	int midterm;
	int final;
	int report;
	int attend;
	double average;
	struct DNODE *Next;
	struct DNODE *Prev;
}DataNode;

HeadNode Head;
DataNode* NewNode = NULL;
DataNode* crr;
DataNode* aw;


void insertNode(DataNode* NewNode){
  if(Head.Front == NULL){
    Head.cnt += 1;
    Head.Front = NewNode;
    Head.Rear = NewNode;
  }
  else {
    Head.cnt += 1;
    Head.Rear->Next = NewNode;
    NewNode->Prev = Head.Rear;
    Head.Rear = Head.Rear->Next;
  }
}
void txtload(){
	printf("3\n");
	FILE *fp = fopen("data.txt","rt");
	printf("4\n");
	fscanf(fp,"%s %s %s %d %d %d %d", NewNode->std_num, NewNode->name, NewNode->major, NewNode->midterm, NewNode->final, NewNode->report, NewNode->attend);
	printf("%s",NewNode->std_num);
}

DataNode* getNodeData(){
	DataNode* ret = NULL;
  ret = (DataNode*)malloc(sizeof(DataNode));
  int majornum = 0;

	printf("학번:");
	scanf("%s", ret->std_num);
	printf("이름:");
	scanf("%s",ret->name);
	printf("학과(1:경제 2:경영 3:컴공 4:정보):");
	scanf("%d",&majornum);
	if(majornum == 1){
		strcpy(ret->major,"경제");
	}
	else if(majornum == 2){
		strcpy(ret->major,"경영");
	}
	else if(majornum == 3){
		strcpy(ret->major,"컴공");
	}
	else if(majornum == 4){
		strcpy(ret->major,"정보");
	}
	printf("중간시험:");
	scanf("%d", &ret->midterm);
	printf("기말시험:");
	scanf("%d", &ret->final);
	printf("보고서 점수:");
	scanf("%d", &ret->report);
	printf("출석점수:");
	scanf("%d", &ret->attend);
  ret->average = (ret->midterm*3/10)+(ret->final*4/10)+ret->report+ret->attend;
  ret->Next = NULL;
  ret->Prev = NULL;
  return ret;
}

void searchByName(){
  char nameinput[10];
  printf("이름: ");
  scanf("%s", nameinput);
  DataNode* horse = Head.Front;
  while(horse != NULL){
    if(strcmp(nameinput,horse->name)){
      //틀림
      horse = horse->Next;
    }
    else {//찾음
      printf("%s %s %s %d %d %d %d %.2f\n", horse->std_num, horse->name, horse->major, horse->midterm, horse->final, horse->report, horse->attend, horse->average);
      break;
    }
  }
}
void searchByStdnum(){
  char stdnuminput[10];
  printf("학번: ");
  scanf("%s", stdnuminput);
  DataNode* horse = Head.Front;
  while(horse != NULL){
    if(strcmp(stdnuminput,horse->std_num)){
      //틀림
      horse = horse->Next;
    }
    else {//찾음
      printf("%s %s %s %d %d %d %d %.2f\n", horse->std_num, horse->name, horse->major, horse->midterm, horse->final, horse->report, horse->attend, horse->average);
      break;
    }
  }
}
void searchByMajor(){
  char major[10];
  printf("이름: ");
  scanf("%s", major);
  DataNode* horse = Head.Front;
  while(horse != NULL){
    if(strcmp(major,horse->major)){
      //틀림
      horse = horse->Next;
    }
    else {//찾음
      printf("%s %s %s %d %d %d %d %.2f\n", horse->std_num, horse->name, horse->major, horse->midterm, horse->final, horse->report, horse->attend, horse->average);
      break;
    }
  }
}
void searchById(){
  int id = 0;
  printf("입력번호: ");
  scanf("%d", &id);
  DataNode* horse = Head.Front;
  int i = 1;
  while(horse != NULL){
    if(id != i){
      //틀림
      horse = horse->Next;
      i++;
    }
    else {//찾음
      printf("%s %s %s %d %d %d %d %.2f\n", horse->std_num, horse->name, horse->major, horse->midterm, horse->final, horse->report, horse->attend, horse->average);
      break;
    }
  }
}

void amendByName(){
  DataNode* horse = Head.Front;
  char nameinput[10];
  printf("이름: ");
  scanf("%s", nameinput);
  while(horse != NULL){
    if(strcmp(nameinput,horse->name)){
      //틀림
      horse = horse->Next;
    }
    else {//찾음
      int majornum=0;
      printf("학번:");
      scanf("%s", horse->std_num);
      printf("이름:");
      scanf("%s",horse->name);
      printf("학과(1:경제 2:경영 3:컴공 4:정보):");
      scanf("%d",&majornum);
      if(majornum == 1){
        strcpy(horse->major,"경제");
      }
      else if(majornum == 2){
        strcpy(horse->major,"경영");
      }
      else if(majornum == 3){
        strcpy(horse->major,"컴공");
      }
      else if(majornum == 4){
        strcpy(horse->major,"정보");
      }
      printf("중간시험:");
      scanf("%d", &horse->midterm);
      printf("기말시험:");
      scanf("%d", &horse->final);
      printf("보고서 점수:");
      scanf("%d", &horse->report);
      printf("출석점수:");
      scanf("%d", &horse->attend);
      horse->average = (horse->midterm*3/10)+(horse->final*4/10)+horse->report+horse->attend;
      break;
    }
  }
}
void amendByStdnum(){
  DataNode* horse = Head.Front;
  char stdnuminput[10];
  printf("학번: ");
  scanf("%s", stdnuminput);
  while(horse != NULL){
    if(strcmp(stdnuminput,horse->std_num)){
      //틀림
      horse = horse->Next;
    }
    else {//찾음
      int majornum=0;
      printf("학번:");
      scanf("%s", horse->std_num);
      printf("이름:");
      scanf("%s",horse->name);
      printf("학과(1:경제 2:경영 3:컴공 4:정보):");
      scanf("%d",&majornum);
      if(majornum == 1){
        strcpy(horse->major,"경제");
      }
      else if(majornum == 2){
        strcpy(horse->major,"경영");
      }
      else if(majornum == 3){
        strcpy(horse->major,"컴공");
      }
      else if(majornum == 4){
        strcpy(horse->major,"정보");
      }
      printf("중간시험:");
      scanf("%d", &horse->midterm);
      printf("기말시험:");
      scanf("%d", &horse->final);
      printf("보고서 점수:");
      scanf("%d", &horse->report);
      printf("출석점수:");
      scanf("%d", &horse->attend);
      horse->average = (horse->midterm*3/10)+(horse->final*4/10)+horse->report+horse->attend;
      break;
    }
  }
}
void amendByid(){
  DataNode* horse = Head.Front;
  int id = 0;
  int i = 1;
  printf("입력번호: ");
  scanf("%d", &id);
  
  while(horse != NULL){
    if(id != i){
      //틀림
      horse = horse->Next;
      i++;
    }
    else {//찾음
      int majornum=0;
      printf("학번:");
      scanf("%s", horse->std_num);
      printf("이름:");
      scanf("%s",horse->name);
      printf("학과(1:경제 2:경영 3:컴공 4:정보):");
      scanf("%d",&majornum);
      if(majornum == 1){
        strcpy(horse->major,"경제");
      }
      else if(majornum == 2){
        strcpy(horse->major,"경영");
      }
      else if(majornum == 3){
        strcpy(horse->major,"컴공");
      }
      else if(majornum == 4){
        strcpy(horse->major,"정보");
      }
      printf("중간시험:");
      scanf("%d", &horse->midterm);
      printf("기말시험:");
      scanf("%d", &horse->final);
      printf("보고서 점수:");
      scanf("%d", &horse->report);
      printf("출석점수:");
      scanf("%d", &horse->attend);
      horse->average = (horse->midterm*3/10)+(horse->final*4/10)+horse->report+horse->attend;
      break;
    }
  }
}


void traverse(){
  DataNode* horse = Head.Front;
  int i = 1;
  while(horse != NULL){
    printf("NO = %d %s %s %s %d %d %d %d %.2f\n", i, horse->std_num, horse->name, horse->major, horse->midterm, horse->final, horse->report, horse->attend, horse->average);
    horse = horse->Next;
    i++;
  }
}

void swap(DataNode* name_sch1, DataNode* name_sch2){
	if(name_sch2 == NULL){
		return;
	}
	
	char tmp1[20];
	int tmp;
	double dtmp;

	strcpy(tmp1, name_sch1->std_num);
	strcpy(name_sch1->std_num, name_sch2->std_num);
	strcpy(name_sch2->std_num, tmp1);
	
	strcpy(tmp1, name_sch1->name);
	strcpy(name_sch1->name, name_sch2->name);
	strcpy(name_sch2->name, tmp1);
	
	strcpy(tmp1, name_sch1->major);
	strcpy(name_sch1->major, name_sch2->major);
	strcpy(name_sch2->major, tmp1);
	
	tmp = name_sch1->midterm;
	name_sch1->midterm = name_sch2->midterm;
	name_sch2->midterm = tmp;
	
	tmp = name_sch1->final;
	name_sch1->final = name_sch2->final;
	name_sch2->final = tmp;
	
	tmp = name_sch1->report;
	name_sch1->report = name_sch2->report;
	name_sch2->report = tmp;
	
	tmp = name_sch1->attend;
	name_sch1->attend = name_sch2->attend;
	name_sch2->attend = tmp;
	
	dtmp = name_sch1->average;
	name_sch1->average = name_sch2->average;
	name_sch2->average = dtmp;	

}

void sortByStdnum(){
	if(Head.Front == NULL){
		return;
	}
	else if(Head.Front->Next == NULL){
		return;
	}

	int i,j;
	int num = Head.cnt;
	crr = Head.Front;
	for(i=num-1;i>0;i--){
		for(j=0;j<i;j++){
			if(atoi(crr->std_num) > atoi(crr->Next->std_num)){
				printf("swap\n");
				swap(crr,crr->Next);
				crr = crr->Next;
			}
			else{
				printf("%d\n", i);
				crr = crr->Next;
			}
		}
		crr = Head.Front;
	}
	traverse();
}

void sortByAverage() {
  	if(Head.Front == NULL){
		return;
	}
	else if(Head.Front->Next == NULL){
		return;
	}

	int i,j;
	int num = Head.cnt;
	crr = Head.Front;
	for(i=num-1;i>0;i--){
		for(j=0;j<i;j++){
			if(crr->average > crr->Next->average){
				swap(crr,crr->Next);
				crr = crr->Next;
			}
			else{
				crr = crr->Next;
			}
		}
		crr = Head.Front;
	}
	traverse();
}



void init(){

	printf("1.데이터 출력\n");
	printf("2.데이터 추가\n");
	printf("3.데이터 검색\n");
	printf("4.데이터 수정\n");
	printf("5.종료\n");

}

void get_num(int input){
  int num = 0;


	if(input==1){
    printf("1.전체 데이터 출력(입력순)\n");
    printf("2.이름으로 정렬 후 출력\n");
    printf("3.학번으로 정렬 후 출력\n");
    printf("4.학과으로 정렬 후 출력\n");
    printf("5.총점으로 정렬 후 출력\n");
    
    scanf("%d", &num);
      if (num == 1)
      {
        traverse();
      }
      else if(num ==2){
        //sortByName();
      }
      else if(num ==3){
			//	sortByStdnum();
      }
      else if(num ==4){
       // sortByMajor();
      }
      else if(num ==5){
        sortByAverage();
      }
      
	}
	else if(input==2){
		NewNode = getNodeData();
    insertNode(NewNode);
	}
	else if(input==3){
    printf("1.이름으로 검색\n");
    printf("2.학번으로 검색\n");
    printf("3.학과로 검색\n");
    printf("4.입력 번호로 검색\n");
		scanf("%d", &num);
		if(num == 1)
		{
			searchByName();
		}
		else if(num == 2)
		{
			searchByStdnum();
		}
		else if(num == 3)
		{
			searchByMajor();
		}
		else if(num == 4)
		{
			searchById();
		}


	}
	else if(input==4){
    printf("1.이름으로 검색 후 수정\n");
    printf("2.학번으로 검색 후 수정\n");
    printf("3.입력(block) 번호로 검색\n");
    scanf("%d", &num);
		if(num == 1)
		{
			amendByName();
		}
		else if(num == 2)
		{
			amendByStdnum();
		}
		else if(num == 3)
		{
			amendByid();
		}

	}
	else if(input==5){
	return;
	}
}



int main(void){
	DataNode* wqe = NewNode;
	Head.cnt = 0;
	Head.Front = NULL;
	Head.Rear = NULL;
	printf("aaa\n");
	txtload();
	printf("aaa\n");
	printf("%d",wqe->final);
		printf("aaa\n");
	int input;

  // while(1){
    
  //   init();

  //   scanf("%d",&input);
  //   if(input == 5) break;
  //   get_num(input);

  // }

	
}