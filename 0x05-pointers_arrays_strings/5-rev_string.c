#include "main.h"
/**
 * rev_string - this function reverses a string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a, b;
	int l;


	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	b = 0;

	while (b < a)
	{
		l = s[a];
		s[a] = s[b];
		s[b] = l;
		b++;
		a--;
	}
}
