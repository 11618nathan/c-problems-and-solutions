// ���ڿ� ������ - �ݴ�� ���

#include <stdio.h>

int main()
{
	char str[100];
	int len = 0;
	int i = 0;
	char tep;

	printf("�Է�: ");
	scanf("%s", str);

	while (str[len] != '\0')
	{
		len++;
	}

	for ( i = 0; i < len/2; i++)
	{
		tep = str[i];
		str[i] = str[(len - i) - 1];
		str[(len - i) - 1] = tep;
	}
	printf("���: %s \n", str);
	return 0;
}