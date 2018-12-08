// 정수 부호 판별

#include <stdio.h>

int main()
{
	int num;

	printf("정수 부호 판별: ");
	scanf("%d", &num);

	num < 0 ? printf("음수 %d \n", num) : printf("양수 %d \n", num);

	return 0;
}