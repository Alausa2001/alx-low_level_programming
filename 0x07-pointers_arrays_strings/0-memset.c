#include "main.h"
/**
 * *_memset - functions fill memory
 * pointed to by *s with constsnt byte b
 * @s: space to be filled
 * @n: no of byte to fill
 * @b: the constant byte(filling element)
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
