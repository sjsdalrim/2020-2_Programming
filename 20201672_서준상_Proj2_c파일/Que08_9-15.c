/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 2 ���� 8
������ ����� [�Ľ�Į�� �ﰢ��]�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/

// �Լ� é�Ͱ� �ڿ� �־ �Լ��� ���� �ʰ� �ۼ��Ͽ����ϴ�.
#include<stdio.h>

int main() {
	int pascal[10][10];
	
	int i, j, k;
	int basfac; // n! ��
	int rfac;
	int nrfac;
	int fin; // �迭�� �ֱ� ���� ��갪
	
	pascal[0][0] = 1;
	
	for (i=1; i<=9; i=i+1) { // nCr������ n
		
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
