// �հ� - ��� �Լ� ���

// �⺻ ����� ������� ����
#include <stdio.h>

// �Լ� �����
int sum(int n);

// main �Լ�
void main()
{
	int num;

	printf("1���� ū ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	printf("1���� %d������ ��: %d\n", num, sum(num));
	return 0;
}


// ��� �Լ�
int sum(int n)
{
	if (n <= 0)
	{
		return 0;
	}

	return n + sum(n - 1);
}
