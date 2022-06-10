#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	ssize_t buffer;
	size_t size = 230;
	char *string, *token;
       	
