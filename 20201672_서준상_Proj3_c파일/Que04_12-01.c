/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 4
다음이 만족하도록 1부터 n까지의 합을 구하는 재귀함수를 구현하여
그 결과를 알아보는 프로그램을 작성하시오
*/

#include<stdio.h>

int sumfunc(int n) {
	static int count = 0;
	count = count + 1;
	
	if (n==1) {
		printf("재귀함수 호출 횟수 : %d\n", count);
		return 1;
	}
	
	int result = n + sumfunc(n-1);
	
	return result;
}

int main() {
	int num;
	printf("입력 >> ");
	scanf("%d", &num);
	
	
	printf("1부터 %d까지의 합 : %d", num, sumfunc(num));
	
	return 0; 
}
