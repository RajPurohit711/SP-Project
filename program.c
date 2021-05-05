#include "program.h"
int main(int argc, int argv[]) 
{
   int status;
   int pid=fork();
   
   if(pid==0)
   {
   char *args[]={"./gcd.out",NULL};
        execvp(args[0],args);
   }
	else
	{
	wait(&status);
	char *args[]={"./lcm.out",NULL};
        execvp(args[0],args);
	}
    
   return 0;
}
