/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 1 문제 10
다음을 출력하는 프로그램을 중첩된 for문을 이용하여 작성하시오.
*/
#include<stdio.h>

int main() {
	
	int i, j, k;

	for (i=0; i<=7; i=i+1) {
		
		for (j=7; j>=0; j=j-1) {
			
			if (i < j) {
				printf(" ");
			} else {
				printf("%d", j);
			}
		}
		
		for (k=1; k<=i; k=k+1) {
			printf("%d", k);
		}
		
		printf("\n");
	}
	
	return 0;
}
