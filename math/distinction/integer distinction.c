// ���� ��ȣ �Ǻ�

#include <stdio.h>

int main()
{
	int num;

	printf("���� ��ȣ �Ǻ�: ");
	scanf("%d", &num);

	num < 0 ? printf("���� %d \n", num) : printf("��� %d \n", num);

	return 0;
}