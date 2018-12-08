// 피보나치 재귀 함수

#include <stdio.h>

int fibonacci(int num)
{
	if (num<=0)
		return 0;
	else if (num == 1)
		return 1;
	return fibonacci(num - 2) + fibonacci(num - 1);
}

int main()
{
	int input = 0;
	int i = 0;
	
	printf("입력: ");
	scanf("%d", &input);

	for ( i = 0; i < input; i++)
	{
		printf("%d ", fibonacci(i));
	}
	puts("");
}