/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 10
ī�� ���ӿ��� ���� �������� 7���� ī�带 �����Ͽ�
�� ī���� ������ Ǯ�Ͽ콺���� �˻��ϴ� �Լ��� ����� �ùķ��̼��ϴ� ���α׷��� �ۼ��Ͻÿ�
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
    for (i=0; i<52; i++ ) { // ī�� 7�� �̴� ����� ���� 9���� �״�� ������ 
        
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
		
		printf("Ǯ�Ͽ콺�Դϴ�");
		break;
		
	}
	
	return 0;
}
