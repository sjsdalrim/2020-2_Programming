/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 4
다음을 참고로 int 형 포인터에 관한 프로그램을 작성하시오.
*/
#include<stdio.h>

int main() {
	int data1 = 10;
	int data2 = 20;
	
	int *p1 = &data1;
	int *p2 = &data2;
	
	int sum = 0;
	
	int **dp;
	
	dp = &p1;
	**dp = 100;
	sum = sum + **dp;
	
	dp = &p2;
	**dp = 200;
	sum = sum + **dp;
	
	printf("%d + %d = %d", data1, data2, sum);
	
	return 0;
}
