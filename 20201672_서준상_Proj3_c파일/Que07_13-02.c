/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 7
13장 문제 1번 + 2번 연계문제 
*/

#include<stdio.h>

struct fraction {
	double numerator;
	double denominator;
};

int main() {
	struct fraction a = { 4.0, 5.0	};
	struct fraction b = { 3.0, 7.0	};
	
	printf("( %.lf / %.lf ) x ( %.lf / %.lf ) = %.lf / %.lf", a.numerator, a.denominator, b.numerator, b.denominator, (a.numerator*b.numerator), (a.denominator*b.denominator));
	
	return 0;
}
