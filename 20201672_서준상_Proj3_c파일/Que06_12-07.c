/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 6
12장 문제 6번 + 7번 연계문제 
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int num;
int input;
int count;
int trycount=1;

static int min = 1;
static int max = 100;

int randnum() {
	srand(time(NULL));
	num = ( rand() % 100 ) + 1;
}

int func1() {
	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n\n");
	printf("이 정수를 맞추어 보세요 >> ");
	scanf("%d", &input); 
}

int func2() {
	printf("축하합니다! 정답은 %d 입니다", num);
}

int func3() {
	max = input - 1;
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 작습니다\n\n", input);
	printf("%d 에서 %d 사이의 정수를 다시 입력하세요 >> ", min, max);
	scanf("%d", &input);
}

int func4() {
	min = input + 1;
	printf("맞추어야 할 정수가 입력한 정수 %d 보다 큽니다\n\n", input);
	printf("%d 에서 %d 사이의 정수를 다시 입력하세요 >> ", min, max);
	scanf("%d", &input);
}

int main() {
	
	randnum();
	func1();
	printf("\n");
	
	while(1) {
		trycount = trycount + 1;
		
		if (num<input) {
			printf("[%d번째 시도] ", trycount-1);
			func3();
		} else if (num>input) {
			printf("[%d번째 시도] ", trycount-1);
			func4();
		} else {
			printf("[%d번째 시도] ", trycount-1);
			func2();
			break;
		}
		
		if (trycount == 5) {
			printf("\n5번의 기회를 소진하였습니다. 정답 : %d", num);
			break;
		}
		
		printf("\n");
	}
	
	return 0;
}
