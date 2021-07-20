/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 10
재귀함수를 이용하여 입력받은 정수를 16진수로 출력하는 프로그램을 작성하시오 
*/
#include <stdio.h>

char h[17]={"0123456789ABCDEF"};

int sixteen(int x) {
    int r;
    
	if (x==0) {
    	return 0;
	}
	
    r = x % 16;
    
    sixteen(x/16);
    printf("%c", h[r]);
    
    return 0;
}

int main() {
    int x;
    printf("정수를 입력하세요>> ");
    scanf("%d", &x);

    sixteen(x);
    
    return 0; 
}
