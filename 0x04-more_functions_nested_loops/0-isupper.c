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
	int p;

	for (u = 'A'; u <= 'Z'; u++)
	{
		if (u == c)
			p = 1;
	}

	return (p);
}
