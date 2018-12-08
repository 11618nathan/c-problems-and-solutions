// 문자열 길이 - 포인터 사용

#include <stdio.h>

int StringPointer(char *s)
{
	int len = 0;
	while (*s++)
	{
		len++;
	}
	return len;
}

int main()
{
	int len;
	char string[100] = "";
	
	printf("문자열 입력: ");
	gets(string);

	printf("문자열 길이: %d \n", StringPointer(string));
}