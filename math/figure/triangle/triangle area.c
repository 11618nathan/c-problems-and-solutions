// �ﰢ�� ���� ���ϱ� - �غ�, ����

#include <stdio.h>

double triangle(double base, double height)
{
	return(base*height / 2.0);
}

int main()
{
	double base = 0;
	double height = 0;

	printf("�ﰢ���� �غ� �Է�: ");
	scanf("%lf", &base);
	printf("�ﰢ���� ���� �Է�: ");
	scanf("%lf", &height);

	printf("�ﰢ���� ����: %lf \n", triangle(base, height));
}
