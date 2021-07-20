/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 2
한 줄의 문자열을 표준입력으로 입력 받아
영문자의 대분자는 소문자로, 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하시오
*/

#include<stdio.h>
#include<string.h>

int main() {
	
	int len;
	char ch[100];
	
	printf("문장 입력 : ");
	gets(ch);
	len = strlen(ch);
	
	printf("\n"); 
	
	printf("변환 결과 : ");
	
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
