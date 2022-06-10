#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
	   printf("I am: %d\n", (int) getpid());

	      pid_t pid = fork();
	         printf("fork returned: %d\n", (int) pid);

		    if (pid < 0) { /* error occurred */
			           perror("Fork failed");
				    }
} 

