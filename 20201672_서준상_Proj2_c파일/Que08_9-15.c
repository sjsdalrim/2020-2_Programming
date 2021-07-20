/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 8
다음을 참고로 [파스칼의 삼각형]을 출력하는 프로그램을 작성하시오. 
*/

// 함수 챕터가 뒤에 있어서 함수를 쓰지 않고 작성하였습니다.
#include<stdio.h>

int main() {
	int pascal[10][10];
	
	int i, j, k;
	int basfac; // n! 값
	int rfac;
	int nrfac;
	int fin; // 배열에 넣기 전의 계산값
	
	pascal[0][0] = 1;
	
	for (i=1; i<=9; i=i+1) { // nCr에서의 n
		
		pascal[i][0] = 1;
		
		basfac = 1;
		
		for (j=1; j<=i; j=j+1) { // n!
			basfac = basfac * j;
		} 
		
		for (j=1; j<=i; j=j+1) { // r
			
			rfac = 1;
			for (k=1; k<=j; k=k+1) { // r!
				rfac = rfac * k;
			}
			
			nrfac = 1;
			for (k=1; k<=(i-j); k=k+1) { // (n-r)!
				nrfac = nrfac * k;
			}
			
			pascal[i][j] = basfac/(rfac*nrfac); // nCr
		}
	}
	
	
	
	int t, u;
	
	for (t=1; t<=10; t=t+1) {
		
		for (u=1; u<=t; u=u+1) {
			printf("%4d", pascal[t-1][u-1]);
		}
		
		printf("\n");
	}
	
	return 0;
}
