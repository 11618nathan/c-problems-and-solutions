// ���ڿ� ���� - ������ ���

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
	
	printf("���ڿ� �Է�: ");
	gets(string);

	printf("���ڿ� ����: %d \n", StringPointer(string));
}