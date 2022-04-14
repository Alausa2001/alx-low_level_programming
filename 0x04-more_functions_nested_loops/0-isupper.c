#include "main.h"
/**
 * _isupper - checks for upper case letters
 *
 * @c: character being checked
 * Return: either 0 or 1
 */
int _isupper(int c)
{
	char u;

	for (u = 'A'; u <= 'Z'; u++)
	{
		if (c == u)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
