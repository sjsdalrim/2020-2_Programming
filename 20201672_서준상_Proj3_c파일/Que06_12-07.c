/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 6
12�� ���� 6�� + 7�� ���蹮�� 
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int num;
int input;
int count;
int trycount=1;

static int min = 1;
static int max = 100;

int randnum() {
	srand(time(NULL));
	num = ( rand() % 100 ) + 1;
}

int func1() {
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n\n");
	printf("�� ������ ���߾� ������ >> ");
	scanf("%d", &input); 
}

int func2() {
	printf("�����մϴ�! ������ %d �Դϴ�", num);
}

int func3() {
	max = input - 1;
	printf("���߾�� �� ������ �Է��� ���� %d ���� �۽��ϴ�\n\n", input);
	printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ��� >> ", min, max);
	scanf("%d", &input);
}

int func4() {
	min = input + 1;
	printf("���߾�� �� ������ �Է��� ���� %d ���� Ů�ϴ�\n\n", input);
	printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ��� >> ", min, max);
	scanf("%d", &input);
}

int main() {
	
	randnum();
	func1();
	printf("\n");
	
	while(1) {
		trycount = trycount + 1;
		
		if (num<input) {
			printf("[%d��° �õ�] ", trycount-1);
			func3();
		} else if (num>input) {
			printf("[%d��° �õ�] ", trycount-1);
			func4();
		} else {
			printf("[%d��° �õ�] ", trycount-1);
			func2();
			break;
		}
		
		if (trycount == 5) {
			printf("\n5���� ��ȸ�� �����Ͽ����ϴ�. ���� : %d", num);
			break;
		}
		
		printf("\n");
	}
	
	return 0;
}
