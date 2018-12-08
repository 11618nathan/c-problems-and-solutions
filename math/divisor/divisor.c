// 약수 divisor - while 구하기

#include <stdio.h>

int main()
{
	int num = 0;
	int div = 1;

	printf("정수 숫자 입력: ");
	scanf("%d", &num);

	while ((num/2) >= div)
	{
		if (num%div == 0)
		{
			printf("%d ", div);
		}
		div++;
	}
	printf("%d 입니다. \n", num);
}