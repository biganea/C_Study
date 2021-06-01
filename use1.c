#include <stdio.h>

struct Person {
	int age;
	int hight;
	int kg;
};

int main(void){
	struct Person p1;

	p1.age = 24;

	printf("%d",p1.age);

}