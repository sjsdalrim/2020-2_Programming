/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 9
다음 내용을 참고로 구조체와 열거형을 정의하여 카드 게임을 할 수 있는 여러 자료형을 만들어보고,
최대 7명에세 7장의 카드를 나눠주는 프로그램을 작성하시오
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

typedef struct tagCard {
	char type;
	int num;
} CARD;


typedef struct tagPlayer {
	CARD card[7];
} PLAYER;

int main() {
   
    srand(time(NULL));
    
	CARD deck[52];
    
    int input;
    printf("카드 게임에 몇 사람이 참가합니까? (최대 7명) >> ");
    scanf("%d", &input);
    
    PLAYER player[input];
    
    int i;
    for (i=0; i<52; i++ ) { 
        
        if ( i < 13 ) { 
            deck[i].type = 'S';
        } else if ( i < 26 ) { 
            deck[i].type = 'C';
        } else if ( i < 39 ) { 
			deck[i].type = 'H';
   		} else {
   			deck[i].type = 'D';
		}
		deck[i].num = i%13 + 1;
	}
	
	for(i=0; i<100; i++ ) {
  		int index1 = rand() % 52;
  		int index2 = rand() % 52;
		CARD temp = deck[index1];
  		deck[index1] = deck[index2];
  		deck[index2] = temp;
	} 
	
	for(i=0; i<input; i++ ) {
		player[i].card[0] = deck[i];
  		player[i].card[1] = deck[i + 7];
  		player[i].card[2] = deck[i + 14];
  		player[i].card[3] = deck[i + 21];
  		player[i].card[4] = deck[i + 28];
  		player[i].card[5] = deck[i + 35];
  		player[i].card[6] = deck[i + 42];
	}
	
	for(i=0; i<input; i++ ) {
  		printf("   사람 %d", i + 1);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[0].num, player[i].card[0].type);
	}
	printf("\n"); 
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[1].num, player[i].card[1].type);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[2].num, player[i].card[2].type);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[3].num, player[i].card[3].type);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[4].num, player[i].card[4].type);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[5].num, player[i].card[5].type);
	}
	printf("\n");
	for(i=0; i<input; i++ ) {
  		printf("  %2d of %c", player[i].card[6].num, player[i].card[6].type);
	}
	
}
