/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 1 문제 6
반지름이 7.58인 원의 면적과 둘레 길이를 구하는 프로그램을 작성하시오
(매크로상수 사용과 소수점 2자리 유효숫자)
*/
#include<stdio.h>

#define PI 3.14

int main() {
	double num = 7.58;
	
	double area = (num * num * PI);
	double cir = (2 * PI * num);
	
	printf("원의 면적 : %.2f\n", area);
	printf("원의 둘레 : %.2f", cir);
	
	return 0;
}
