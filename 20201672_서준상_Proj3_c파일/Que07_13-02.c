/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 7
13�� ���� 1�� + 2�� ���蹮�� 
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
