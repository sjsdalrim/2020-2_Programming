/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 4
������ �����ϵ��� 1���� n������ ���� ���ϴ� ����Լ��� �����Ͽ�
�� ����� �˾ƺ��� ���α׷��� �ۼ��Ͻÿ�
*/

#include<stdio.h>

int sumfunc(int n) {
	static int count = 0;
	count = count + 1;
	
	if (n==1) {
		printf("����Լ� ȣ�� Ƚ�� : %d\n", count);
		return 1;
	}
	
	int result = n + sumfunc(n-1);
	
	return result;
}

int main() {
	int num;
	printf("�Է� >> ");
	scanf("%d", &num);
	
	
	printf("1���� %d������ �� : %d", num, sumfunc(num));
	
	return 0; 
}
