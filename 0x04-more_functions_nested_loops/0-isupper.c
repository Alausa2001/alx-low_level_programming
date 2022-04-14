#include "main.h"
/**
 * _isupper - checks for upper case letters
 *
 * @c: character being checked
 * Return: either 0 or 1
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
