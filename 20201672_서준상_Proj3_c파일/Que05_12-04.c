/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 5
���� ����� �������̽��� ����� ����ڿ� ���α׷���
����, ����, �� ������ �ùķ��̼��ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int player;
	int program;
	
	printf("����(0), ����(1), ��(2) �߿��� �ϳ� �Է� >> ");
	scanf("%d", &player);
	
	srand(time(NULL));
	program = rand() % 3;
	
	switch (program) {
		case 0 :
			if (player == 0) {
				printf("����� �����̰�, �ý��۵� �����Դϴ�. \n\n���º�");
			} else if (player == 1) {
				printf("����� �����̰�, �ý����� �����Դϴ�. \n\n�¸�");
			} else if (player == 2) {
				printf("����� ���̰�, �ý����� �����Դϴ�. \n\n�й�");
			}
			break;
		case 1 :
			if (player == 0) {
				printf("����� �����̰�, �ý����� �����Դϴ�. \n\n�й�");
			} else if (player == 1) {
				printf("����� �����̰�, �ý��۵� �����Դϴ�. \n\n���º�");
			} else if (player == 2) {
				printf("����� ���̰�, �ý����� �����Դϴ�. \n\n�¸�");
			}
			break;
		case 2 :
			if (player == 0) {
				printf("����� �����̰�, �ý����� ���Դϴ�. \n\n�¸�");
			} else if (player == 1) {
				printf("����� �����̰�, �ý����� ���Դϴ�. \n\n�й�");
			} else if (player == 2) {
				printf("����� ���̰�, �ý��۵� ���Դϴ�. \n\n���º�");
			}
			break;
	}
	
	return 0; 
}
