#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: the character i wan check
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
		return (1);
	else
		return(0);
}
