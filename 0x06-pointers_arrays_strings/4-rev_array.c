#include "main.h"
/**
 * reverse_array - this function reverses an array
 * @a: the array
 * @n: no of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, temp = 0;

for (; i < (n / 2); i++)
{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
}
}
