// Ȧ¦ �Ǻ�

#include <stdio.h>

int main()
{
	int num;

	printf("Ȧ¦ �Ǻ� �Է�: ");
	scanf("%d", &num);

	switch (num%2)
	{
	case 0:
		printf("¦�� %d \n", num);
		break;
	case 1:
		printf("Ȧ�� %d \n", num);
		break;
	}
}