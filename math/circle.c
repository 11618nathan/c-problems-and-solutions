#include <stdio.h>
#include <stdlib.h>

int main()
{
	double pi = 3.141592, radius = 0.0;
	double area, circumference;

	scanf("원의 둘레를 입력하세요: %lf", &radius);

	area = pi*radius*radius;
	circumference = 2.0*pi*radius;

	printf("원의 넓이 = %f\n", area);
	printf("원의 둘레 = %f\n", circumference);
}