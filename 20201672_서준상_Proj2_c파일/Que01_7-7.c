/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 2 ���� 1
ǥ���Է����� �Է��� �������� ������ �ڸ��� �ش��ϴ� ����
�ݴ�� ����ϴ� ���α׷��� do while ���� �̿��Ͽ� �ۼ��Ͻÿ�.
*/
#include<stdio.h>

int main() {
	int input, a;
	
	printf("�ݴ�� ����� ������ �Է��ϼ���. >> ");
	scanf("%d", &input);
	
	printf("\n�Է��� ������ �ݴ�� ����ϸ�>>> ");
	
	do {
		a=input%10;
		printf("%d",a);
		input = input / 10;
	} while (input!=0);
	
	return 0;
}
