/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 6
다음을 참고로 배열을 초기화하고 반복문을 사용하여
배열의 모든 원소를 출력하는 프로그램을 작성하시오. 
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
