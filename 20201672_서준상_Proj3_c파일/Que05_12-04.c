/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 5
다음 입출력 인터페이스를 참고로 사용자와 프로그램이
가위, 바위, 보 게임을 시뮬레이션하는 프로그램을 작성하시오
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int player;
	int program;
	
	printf("가위(0), 바위(1), 보(2) 중에서 하나 입력 >> ");
	scanf("%d", &player);
	
	srand(time(NULL));
	program = rand() % 3;
	
	switch (program) {
		case 0 :
			if (player == 0) {
				printf("당신은 가위이고, 시스템도 가위입니다. \n\n무승부");
			} else if (player == 1) {
				printf("당신은 바위이고, 시스템은 가위입니다. \n\n승리");
			} else if (player == 2) {
				printf("당신은 보이고, 시스템은 가위입니다. \n\n패배");
			}
			break;
		case 1 :
			if (player == 0) {
				printf("당신은 가위이고, 시스템은 바위입니다. \n\n패배");
			} else if (player == 1) {
				printf("당신은 바위이고, 시스템도 바위입니다. \n\n무승부");
			} else if (player == 2) {
				printf("당신은 보이고, 시스템은 바위입니다. \n\n승리");
			}
			break;
		case 2 :
			if (player == 0) {
				printf("당신은 가위이고, 시스템은 보입니다. \n\n승리");
			} else if (player == 1) {
				printf("당신은 바위이고, 시스템은 보입니다. \n\n패배");
			} else if (player == 2) {
				printf("당신은 보이고, 시스템도 보입니다. \n\n무승부");
			}
			break;
	}
	
	return 0; 
}
