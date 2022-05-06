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
	int d, s;
	
	s1 =(char *)malloc(d * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	d = 0;
	while (s1[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (s2[s] != '\0')
	{
		s1[d] = s2[s];
		d++;
		s++;
	}
	s1[d] = '\0';
	return (s1);
}
