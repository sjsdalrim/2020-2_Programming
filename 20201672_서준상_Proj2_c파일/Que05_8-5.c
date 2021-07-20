/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 5
다음과 같이 int 형 변수 i에 0x324F3A24를 정의하고, char * 변수 p를 선언한 후,
포인터 변수 p를 이용하여 i 의 저장값을 각각 바이트로 인지하여 바로 324F3A24로 출력하는 프로그램을 작성하시오.
*/
#include<stdio.h>

int main() {
	int n = 0x324F3A24;
	char *p;
	
	p = &n;
	
	int i;
	for (i=3; i>=0; i=i-1) {
		printf("%X", *(p + i) );
	}
	
	return 0;
}
