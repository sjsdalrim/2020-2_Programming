/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 2
�� ���� ���ڿ��� ǥ���Է����� �Է� �޾�
�������� ����ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#include<stdio.h>
#include<string.h>

int main() {
	
	int len;
	char ch[100];
	
	printf("���� �Է� : ");
	gets(ch);
	len = strlen(ch);
	
	printf("\n"); 
	
	printf("��ȯ ��� : ");
	
	int i;
	for (i=0; i<len; i=i+1) {
		if ( (ch[i]>='A') && (ch[i]<='Z') ) {
			ch[i] = tolower(ch[i]);
		} else if ( (ch[i]>='a') && (ch[i]<='z') ){
			ch[i] = toupper(ch[i]);
		}
		
		printf("%c", ch[i]);
	}
	
	return 0;
}
