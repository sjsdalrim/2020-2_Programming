/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 1
�� ���� ���ڿ��� ǥ���Է����� �Է� �޾� �ܾ��� ���ڸ� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#include<stdio.h>
#include<string.h>

int main() {
	char ch[100];
	printf("�� ���� ������ �Է��ϼ��� >>\n");
	gets(ch);
	
	printf("\n");
	
	printf("�Է��� ������ �ܾ �ݴ�� ����մϴ� >>\n");
	char* aa = strtok(ch, " ");
	
	while (aa != NULL) {
		int size = strlen(aa) - 1;
		for (size; size>=0; size=size-1) {
			printf("%c", aa[size]);
		}
		printf(" ");
		aa = strtok(NULL, " ");
	}
	
	return 0;
}
