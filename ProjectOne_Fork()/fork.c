#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char *argv[])
{
	
	/*if the program is only comipiled and no arguments are entered it will display the about of the program*/ 
	if((strcmp(argv[0],"./fork")==0)&& argc==1){
	
	printf("Welcome to the killing and creation of processes application, to see the list of commands enter help\n\n");
	
	}/*when the arguments frk and -create are entered it should run the function of fork to create processes*/
	else if((strcmp(argv[1],"frk")==0) && (strcmp(argv[2],"-create")==0) && (argc==4))
	{
		/*proc it saving the amount of processes that the user wants to create*/
		int proc = atoi(argv[3]);
		printf("Creating %d processes\n", proc);
		printf("1. Parent PID is: \n");
		/*loop for the amount of processes entered by the user*/
		for (int i=0; i<proc-1;i++)
		{
			printf("%d. CHild PID is :\n", i+2);
		}

		printf("All %d processes have been created\n\n", proc);
	/*when the argumentes kill and -proc are entered it should run the function to kill the process*/
	}else if ((strcmp(argv[1],"kill")==0) && (strcmp(argv[2],"-proc")==0)&&(argc==4))
	{
		/*pid is holding the pid of the process the user wants to kill*/
		int pid = atoi(argv[3]);
		printf("\nKilling PID %d\n", pid);
		printf("PID %d has been killed\n\n", pid);
	/*If the user enters the argument help, it should display all the commands that can be entered*/
	}else if ((strcmp(argv[1],"help")==0))
	{
		printf("__________________________________________________________________\n");
		printf("To use this application, this are the commands that can be used:\n");
		printf("To create a process enter frk -create (number of processes)\n");
		printf("Example frk -create 5\n\n");
		printf("To kill a process enter kill -proc (PID)\n");
		printf("Example kill -proc 6537\n\n");
		printf("Thank you for using our application\n");
		printf("__________________________________________________________________\n");
	}else 
	{
		printf("Incorrect input, please enter the argument again. If you need help enter help\n");
	}

	return 0;

}
