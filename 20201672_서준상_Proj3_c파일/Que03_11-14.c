/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 3
ǥ���Է����� ���� ������ �� ���� ǥ���ϴ� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

���� ������ 1,000���� ���� ������ �����ִµ�,
���ÿ� 10,000���� ���� ������ �Ǿ� �־ ���Ƿ� 10,000���� �ۼ��Ͽ����ϴ�. 
*/

#include<stdio.h>
#include<string.h>

int ten(int a) {
	int result = 1;
	int i;
	
	for (i=0; i<=a; i=i+1) {
		result = result * 10;
	}
	
	result = result / 10;
	
	return result;
}

int main() {
	int num;
	int aa;
	
	printf("10,000���� ���� ���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	
	printf("\n");
	
	int i;
	for (i=3; i>=0; i=i-1) {
		aa = num / ten(i);
		
		switch (aa) {
			case 1 :
				printf("��");
				break;
			case 2 :
				printf("��");
				break;
			case 3 :
				printf("��");
				break;
			case 4 :
				printf("��");
				break;
			case 5 :
				printf("��");
				break;
			case 6 :
				printf("��");
				break;
			case 7 :
				printf("ĥ");
				break;
			case 8 :
				printf("��");
				break;
			case 9 :
				printf("��");
				break;
		}
		
		num = num % ten(i);
		
		if (i==3) {
			printf("õ");
		} else if (i==2) {
			printf("��");
		} else if (i==1) {
			printf("��");
		}
		
		printf(" ");
		
	}
	
	return 0;
}
