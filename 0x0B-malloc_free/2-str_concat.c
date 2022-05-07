#include "main.h"
#include <stdlib.h>
/**
 * str_concat - The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 * @s1: destination
 * @s2: source
 * Return: return char pointer if successful, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int d1, d2, i, j;
	char *p;

	d1 = 0;
	while (s1[d1] != '\0')
	{
		d1++;
	}
	d2 = 0;
	while (s2[d2] != '\0')
	{
		d2++;
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = (char *)malloc(sizeof(char) * (d1 + d2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < d1; i++)
		p[i] = s1[i];
	for (j = 0; j <= d2; i++, j++)
		p[i] = s2[j];
	return (p);
}
