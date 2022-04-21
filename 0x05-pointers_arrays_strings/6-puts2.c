#include "main.h"
/**
 * puts2 - function to print
 * a string in an alternating order
 * @str: contains char to be printed
 * Return: void
 */
void puts2(char *str)
{
	int lett;

	for (lett = 0; str[lett] != '\0'; lett++)
	{
		if (lett % 2 == 0)
			_putchar(str[lett]);
	}
	_putchar('\n');
}
