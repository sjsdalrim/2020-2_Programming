/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 1 문제 7
자신의 학번을 입력 받아 다음 조건을 만족하는 프로그램을 작성하시오.
입력된 숫자 가운데 마지막 2자리 수를 십진수로 출력
마지막 2자리 수를 2진수, 8진수, 16진수로 변환한 코드 값을 출력, 끝자리수가 00인경우 99를 사용
*/
#include<stdio.h>

int main() {
	
	int id;
	printf("학번 입력 : "); 
	scanf("%d", &id);
	
	int num = id % 100;
	printf("마지막 2자리 수 : %d\n", num);
	
	if (num==0) {
		num = 99;
	}
	
	int n0, n1, n2, n3, n4, n5, n6;
	n6 = num / 64;
	n5 = (num % 64) / 32;
	n4 = (num % 32) / 16;
	n3 = (num % 16) / 8;
	n2 = (num % 8) / 4;
	n1 = (num % 4) / 2;
	n0 = (num % 2) / 1;
	
	printf("2진수 : %d%d%d%d%d%d%d, ", n6, n5, n4, n3, n2, n1, n0);
	printf("8진수 : %o, 16진수 : %x", num, num, num);
	
	return 0;
}
