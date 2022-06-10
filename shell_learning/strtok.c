#include <string.h>
#include <stdio.h>
int main()
{
	char *token;
	int i;
	char str[] = "what)the hell; is this! man";
	char delim[] =  "), !, ;";	

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
	token = strtok(NULL, delim);	
	}
	
	return (0);
}


