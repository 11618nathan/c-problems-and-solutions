#include <stdio.h>
#include <stdlib.h>

int main()
{
	double pi = 3.141592, radius = 0.0;
	double area, circumference;

	scanf("���� �ѷ��� �Է��ϼ���: %lf", &radius);

	area = pi*radius*radius;
	circumference = 2.0*pi*radius;

	printf("���� ���� = %f\n", area);
	printf("���� �ѷ� = %f\n", circumference);
}