#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to a binary number (type is str)
 * Return: the corresponding decimal of the number b points to
 */

unsigned int binary_to_uint(const char *b)
{
	int zero = 0, one = 1;
	int len = 0, dec = 0, count = 0;

	if (b == NULL)
		return 0;
	for (; b[len] != '\0'; len++)
	{
		if (b[len] != 49 && b[len] != 48)
			return 0;
	}
	len--;
	while(b[count] != '\0')
	{
		if (b[count] == 49)
		{
			dec += one << len;
			len--;
		}
		if (b[count] == 48)
		{
			dec += zero << len;
			len--;
		}
		count++;
	}
	return dec;
}
