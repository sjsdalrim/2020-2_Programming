/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 1 문제 9
다음을 참고로 표준입력으로 받은 년도와 달을 이용하여 월의 말일을 출력하는 프로그램을 if 문을 사용하여 작성하시오.
기원 연수가 4로 나누어 떨어지는 해는 우선 윤년으로 하고, 그 가운데에서 100으로 나누어 떨어지는 해는 평년으로 하며,
다만 400으로 나누어 떨어지는 해는 윤년으로 정한다. 입력으로는 본인 학번의 마지막 세자리 숫자를 사용하여 출력을 구하시오. 
*/
#include<stdio.h>

int main() {
	
	int month, year;
	
	printf("년도 : ");
	scanf("%d", &year);
	printf("달 : ");
	scanf(" %d", &month);
	
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
		printf("\n말일은 31일");
		
	} else if (month==4 || month==6 || month==9 || month==11) {
		printf("\n말일은 30일");
		
	} else if (month==2) {
		if ( (year%400)==0 ) {
			printf("\n말일은 29일");
		} else if ( (year%100)==0 ) {
			printf("\n말일은 28일");
		} else if ( (year%4)==0 ) {
			printf("\n말일은 29일");
		} else {
			printf("\n말일은 28일");
		}
	}
	
	return 0;
} 

