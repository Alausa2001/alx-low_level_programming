#include <main.h>
/**
 * main - program prints all arguments it receives
 * Retun: 0
 */
int main(void)
{
	int i = 0;

	for(; i < agrc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
