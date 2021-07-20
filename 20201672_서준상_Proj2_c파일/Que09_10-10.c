/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 9
다음을 참고로 피보나츠 수를ㄹ 구하는 함수를 재귀함수로 작성하여
처음부터 10번째의 피보나츠 수에 대하여 각각의 함수 결과를 모두 출력하는 프로그램을 작성하시오.
*/
#include<stdio.h>

int fib(int x) {
	
	if (x<=2) {
		return 1;
		
	} else {
		return fib(x-1) + fib(x-2);
		
	}
}


int main() {
	
	int j;
	for (j=1; j<=10; j=j+1) {
		printf("%d ", fib(j));
	}
	
	return 0;
}
