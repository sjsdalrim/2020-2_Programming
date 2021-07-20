/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 8
다음 내용을 참고로 구조체 car를 정의하고, 자동차 2대를 선언하여
적당한 값을 입력하고 출력하는 프로그램을 작성하시오
*/

#include<stdio.h>

struct person {
	char name[30];
	char phone_num[30];
	char address[50];
};

struct car {
	char year[10];
	char carname[20];
};

union company {
	struct person a;
	char compname[30];
};

int main() {
	struct car arr[2] = { {"2012 09", "그랜져 GT"}, {"2013 04", "인피니티"} };
	union company arr2[2] = { {"홍길동", "011-1111-1111", "서울시 구로구 고척동"}, "인피니티북스" };
	
	printf("%10s%10s%10s%15s %s\n", arr[0].year, arr[0].carname, arr2[0].a.name, arr2[0].a.phone_num, arr2[0].a.address);
	printf("%10s%10s%16s", arr[1].year, arr[1].carname, arr2[1].compname);
	
	return 0;
}
