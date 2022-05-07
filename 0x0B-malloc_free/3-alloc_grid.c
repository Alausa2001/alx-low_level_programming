#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to atwo dimensional array
 * @width: width of matrix
 * @height: height of matrix
 * Return: return pointer or null depending of function success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
	p = (int *)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return(NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for(i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
