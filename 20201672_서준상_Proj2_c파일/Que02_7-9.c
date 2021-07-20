/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 2 문제 2
원금이 1000000인 경우, 예치기간을 1년에서 10년까지
매년 말에 받을 총 금액을 출력
*/
#include<stdio.h>

int main() {
	
	int money = 1000000;
	
	int i;
	
	for (i=1; i<=10; i=i+1) {
		
		float Eza = (money*45/1000);
		printf("%2d년 총 금액 : %.0f\n", i, (money + (Eza*i)) );
		
	}
	
	return 0;
}
