/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ�
Project 2 ���� 10
����Լ��� �̿��Ͽ� �Է¹��� ������ 16������ ����ϴ� ���α׷��� �ۼ��Ͻÿ� 
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
    printf("������ �Է��ϼ���>> ");
    scanf("%d", &x);

    sixteen(x);
    
    return 0; 
}
