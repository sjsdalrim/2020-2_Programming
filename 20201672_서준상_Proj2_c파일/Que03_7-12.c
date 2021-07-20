/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상
Project 2 문제 3
다음 식을 참고로 섭씨 온도(C)를 화씨 온도(F)로 변환하는 프로그램을
다음과 같은 출력이 나오도록 작성하시오.
*/
#include<stdio.h>

int main() {
	
	float sub, hwa;
	
	for (sub=-60; sub<=140; sub=sub+20) {
		hwa = (9.0/5.0)*sub + 32;
		printf("섭씨 : %4.0f도  화씨 : %4.0f도\n", sub, hwa);
	}
	
	return 0;
}
