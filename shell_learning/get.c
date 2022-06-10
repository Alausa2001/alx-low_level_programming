#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int mypid, myppid;

	mypid = getpid();
	printf("%d\n", mypid);
	myppid = getppid();
	printf("%d", myppid);
	return (0);
}
