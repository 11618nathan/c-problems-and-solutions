// 삼각형 넓이 구하기 - 밑변, 높이

#include <stdio.h>

double triangle(double base, double height)
{
	return(base*height / 2.0);
}

int main()
{
	double base = 0;
	double height = 0;

	printf("삼각형의 밑변 입력: ");
	scanf("%lf", &base);
	printf("삼각형의 높이 입력: ");
	scanf("%lf", &height);

	printf("삼각형의 넓이: %lf \n", triangle(base, height));
}
