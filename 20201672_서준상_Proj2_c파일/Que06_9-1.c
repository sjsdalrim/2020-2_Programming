/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 2 ���� 6
������ ����� �迭�� �ʱ�ȭ�ϰ� �ݺ����� ����Ͽ�
�迭�� ��� ���Ҹ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
#include<stdio.h>

int main() {
	
	double degree[] = {-5.34, 3.67, 19.76, 28.76, 35.63};
	int size = sizeof(degree)/sizeof(double);
	
	int i;
	
	for (i=1; i<=size; i=i+1) {
		printf("%.2f ", degree[i-1]);
	}
	
	return 0;
}
