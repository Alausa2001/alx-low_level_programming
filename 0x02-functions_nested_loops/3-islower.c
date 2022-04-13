#include "main.h"
/**
 * _islower - check for lower characters
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= '122')
		return (1);
	else
		return (0);
}
