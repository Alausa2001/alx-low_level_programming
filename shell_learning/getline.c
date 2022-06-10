#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t bufsize = 12;
	size_t character;

	buffer = (char *)malloc(sizeof(char) * bufsize);
	printf("$ ");
	character = getline(&buffer, &bufsize, stdin);
	printf("%s\n", buffer);
	printf("%zu chars were read", character);
}
