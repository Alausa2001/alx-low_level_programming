#include "main.h"
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: no of strings to copy from s2
 * Return: it should return the pointer to the new allocated string
 * if function fails return null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= n + len1; j++)
	{
		p[i + 1] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
