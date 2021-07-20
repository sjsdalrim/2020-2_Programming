/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 1
표준입력으로 입력한 정수에서 각각의 자리에 해당하는 수를
반대로 출력하는 프로그램을 do while 문을 이용하여 작성하시오.
*/
#include<stdio.h>

int main() {
	int input, a;
	
	printf("반대로 출력할 정수를 입력하세요. >> ");
	scanf("%d", &input);
	
	printf("\n입력한 정수를 반대로 출력하면>>> ");
	
	do {
		a=input%10;
		printf("%d",a);
		input = input / 10;
	} while (input!=0);
	
	return 0;
}
