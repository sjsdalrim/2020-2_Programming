/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 2 ���� 4
������ ����� int �� �����Ϳ� ���� ���α׷��� �ۼ��Ͻÿ�.
*/
#include<stdio.h>

int main() {
	int data1 = 10;
	int data2 = 20;
	
	int *p1 = &data1;
	int *p2 = &data2;
	
	int sum = 0;
	
	int **dp;
	
	dp = &p1;
	**dp = 100;
	sum = sum + **dp;
	
	dp = &p2;
	**dp = 200;
	sum = sum + **dp;
	
	printf("%d + %d = %d", data1, data2, sum);
	
	return 0;
}
