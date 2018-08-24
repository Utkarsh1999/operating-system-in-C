#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>



int main()
{

	pid_t pid ;

	pid = fork();
	pid = fork();


	if(pid<0)
	{
		printf("unable to create the process\n");	
	}
	else if(pid > 0)
	{
		printf("i am  %d ,my parent id is %d \n",getpid(),getppid()); 
	}
	else if(pid==0)
	{
		printf("i am %d child of %d\n",getpid(),getppid());
	}

}
