#include <stdio.h>
/**
 * print_before_main - prints string before the main func.
 * Return: nothing(void)
 */
void __attribute__((constructor)) print_before_main(void);
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
