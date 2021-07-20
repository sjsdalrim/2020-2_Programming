/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 3
표준입력으로 받은 정수를 그 값을 표현하는 문자열로 출력하는 프로그램을 작성하시오

문제 본문엔 1,000보다 작은 정수로 적혀있는데,
예시엔 10,000보다 작은 정수로 되어 있어서 임의로 10,000으로 작성하였습니다. 
*/

#include<stdio.h>
#include<string.h>

int ten(int a) {
	int result = 1;
	int i;
	
	for (i=0; i<=a; i=i+1) {
		result = result * 10;
	}
	
	result = result / 10;
	
	return result;
}

int main() {
	int num;
	int aa;
	
	printf("10,000보다 작은 정수 하나를 입력하세요 : ");
	scanf("%d", &num);
	
	printf("\n");
	
	int i;
	for (i=3; i>=0; i=i-1) {
		aa = num / ten(i);
		
		switch (aa) {
			case 1 :
				printf("일");
				break;
			case 2 :
				printf("이");
				break;
			case 3 :
				printf("삼");
				break;
			case 4 :
				printf("사");
				break;
			case 5 :
				printf("오");
				break;
			case 6 :
				printf("육");
				break;
			case 7 :
				printf("칠");
				break;
			case 8 :
				printf("팔");
				break;
			case 9 :
				printf("구");
				break;
		}
		
		num = num % ten(i);
		
		if (i==3) {
			printf("천");
		} else if (i==2) {
			printf("백");
		} else if (i==1) {
			printf("십");
		}
		
		printf(" ");
		
	}
	
	return 0;
}
