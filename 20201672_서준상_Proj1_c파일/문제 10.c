/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 1 ���� 10
������ ����ϴ� ���α׷��� ��ø�� for���� �̿��Ͽ� �ۼ��Ͻÿ�.
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
