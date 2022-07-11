#include "main.h"
/**
 * reverse_array - this function reverses an array
 * @a: the array
 * @n: no of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count, count2;
	int temp = 0;

	count2 = 0;
	for (count = 0; count < n; count++)
		;
	count--;
	while (count2 < count && a[count] != '\0')
	{
		temp = a[count];
		a[count] = a[count2];
		a[count2] = temp;
		count--;
		count2++;
	}
}
