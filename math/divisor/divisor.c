// ��� divisor - while ���ϱ�

#include <stdio.h>

int main()
{
	int num = 0;
	int div = 1;

	printf("���� ���� �Է�: ");
	scanf("%d", &num);

	while ((num/2) >= div)
	{
		if (num%div == 0)
		{
			printf("%d ", div);
		}
		div++;
	}
	printf("%d �Դϴ�. \n", num);
}