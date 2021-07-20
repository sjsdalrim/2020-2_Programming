/*
프로그래밍 05분반
소프트웨어학과 20201672 서준상 
Project 3 문제 10
카드 게임에서 게임 참가자의 7장의 카드를 저장하여
이 카드의 조합이 풀하우스인지 검사하는 함수를 만들어 시뮬레이션하는 프로그램을 작성하시오
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
    
    PLAYER player[0];
    
    int i;
    for (i=0; i<52; i++ ) { // 카드 7장 뽑는 방법은 문제 9에서 그대로 가져옴 
        
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
	
	while (1) {
		for(i=0; i<100; i++ ) {
	  		int index1 = rand() % 52;
  			int index2 = rand() % 52;
			CARD temp = deck[index1];
  			deck[index1] = deck[index2];
  			deck[index2] = temp;
		} 
	
		for(i=0; i<7; i++ ) {
			player[0].card[i] = deck[i];
		}
		
		for(i=0; i<7; i++ ) {
  			printf("  %2d of %c,", player[0].card[i].num, player[0].card[i].type);
		}
		
		printf("\n\n");
		
		int count2 = 0;
		for (i=0; i<13; i++ ) {
			int j = 0;
			int count2_sub = 0;
			for (j=0; j<7; j++) {
				if (player[0].card[j].num == i+1) {
					count2_sub++;
				}
				if (count2_sub>=2) {
					count2++;
				}
			}
		}
		if (count2<2) {
			continue;
		}
		
		int count3 = 0;
		for (i=0; i<13; i++ ) {
			int j = 0;
			int count3_sub = 0;
			for (j=0; j<7; j++) {
				if (player[0].card[j].num == i+1) {
					count3_sub++;
				}
				if (count3_sub>=3) {
					count3++;
				}
			}
		}
		if (count3<1) {
			continue;
		}
		
		printf("풀하우스입니다");
		break;
		
	}
	
	return 0;
}
