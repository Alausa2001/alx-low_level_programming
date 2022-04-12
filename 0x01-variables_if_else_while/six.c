#include <stdio.h>
int main(void)
{
	char b;

	for (b = 0; b < 20; b++)
	{
		printf("%d", b);
		if (b % 2 == 0)
			printf("samuel");
		if (b % 3 == 0)
		{
			printf("okeleye");
		}
		if (b % 3 && 2 == 0)
		{
			printf("niggalation");
		}
	}
	printf('\n')
	return (0);
	}
