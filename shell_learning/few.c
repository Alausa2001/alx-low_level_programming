#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	
	char *argv[] = {"ls", "-l", "/tmp", NULL};
	char cmd[] = {"/bin/ls"};
	char *envp[] = {NULL};
	pid_t mypid;
	int statu, i;

	mypid = fork();	
		if (mypid > 0)
		{
			wait(&statu);
		for (i = 0; i < 5; i++)
		{
			mypid = fork();
			wait(&statu);			
			if (mypid == 0)
			{	
		wait(&statu);
	
	execve(cmd, argv, envp);
			}
		}
	}
	
	return (0);
}
