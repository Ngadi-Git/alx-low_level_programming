#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t my_pid, ret_pid;
	int status;
	printf("\n The process Id is: %d\n", getpid());

	ret_pid = fork();
	if(ret_pid == -1)
		perror("Fork failure!");
	else if(ret_pid == 0)
	{
		printf("\nChild process\n");
		printf("The process Id is %d\n", getpid());
		sleep(20);
	}
	else
	{
		wait(&status);
		printf("\nParent process\n");
		printf("The process Id is %d\n", getpid());
		sleep(30);
	}

	return (0);

}
