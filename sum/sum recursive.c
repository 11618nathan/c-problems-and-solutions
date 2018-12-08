// 합계 - 재귀 함수 사용

// 기본 입출력 헤더파일 선언
#include <stdio.h>

// 함수 선언부
int sum(int n);

// main 함수
void main()
{
	int num;

	printf("1보다 큰 숫자를 입력하세요: ");
	scanf("%d", &num);

	printf("1부터 %d까지의 합: %d\n", num, sum(num));
	return 0;
}


// 재귀 함수
int sum(int n)
{
	if (n <= 0)
	{
		return 0;
	}

	return n + sum(n - 1);
}
