/*
���α׷��� 05�й�
����Ʈ�����а� 20201672 ���ػ� 
Project 3 ���� 8
���� ������ ����� ����ü car�� �����ϰ�, �ڵ��� 2�븦 �����Ͽ�
������ ���� �Է��ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
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
	struct car arr[2] = { {"2012 09", "�׷��� GT"}, {"2013 04", "���Ǵ�Ƽ"} };
	union company arr2[2] = { {"ȫ�浿", "011-1111-1111", "����� ���α� ��ô��"}, "���Ǵ�Ƽ�Ͻ�" };
	
	printf("%10s%10s%10s%15s %s\n", arr[0].year, arr[0].carname, arr2[0].a.name, arr2[0].a.phone_num, arr2[0].a.address);
	printf("%10s%10s%16s", arr[1].year, arr[1].carname, arr2[1].compname);
	
	return 0;
}
