/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 2 ���� 2
������ 1000000�� ���, ��ġ�Ⱓ�� 1�⿡�� 10�����
�ų� ���� ���� �� �ݾ��� ���
*/
#include<stdio.h>

int main() {
	
	int money = 1000000;
	
	int i;
	
	for (i=1; i<=10; i=i+1) {
		
		float Eza = (money*45/1000);
		printf("%2d�� �� �ݾ� : %.0f\n", i, (money + (Eza*i)) );
		
	}
	
	return 0;
}
