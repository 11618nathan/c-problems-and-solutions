// È¦Â¦ ÆÇº°

#include <stdio.h>

int main()
{
	int num;

	printf("È¦Â¦ ÆÇº° ÀÔ·Â: ");
	scanf("%d", &num);

	switch (num%2)
	{
	case 0:
		printf("Â¦¼ö %d \n", num);
		break;
	case 1:
		printf("È¦¼ö %d \n", num);
		break;
	}
}