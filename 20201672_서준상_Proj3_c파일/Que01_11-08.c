/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 1
한 줄의 문자열을 표준입력으로 입력 받아 단어의 문자를 역순으로 출력하는 프로그램을 작성하시오
*/

#include<stdio.h>
#include<string.h>

int main() {
	char ch[100];
	printf("한 줄의 문장을 입력하세요 >>\n");
	gets(ch);
	
	printf("\n");
	
	printf("입력한 각각의 단어를 반대로 출력합니다 >>\n");
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
