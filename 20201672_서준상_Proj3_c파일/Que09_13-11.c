/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 9
���� ������ ����� ����ü�� �������� �����Ͽ� ī�� ������ �� �� �ִ� ���� �ڷ����� ������,
�ִ� 7���� 7���� ī�带 �����ִ� ���α׷��� �ۼ��Ͻÿ�
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
    printf("ī�� ���ӿ� �� ����� �����մϱ�? (�ִ� 7��) >> ");
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
  		printf("   ��� %d", i + 1);
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
