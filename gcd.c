#include "program.h"


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of metricay of numbers
int findGCD(int metric[], int count)
{
    int result = metric[0];
    for (int i = 1; i < count; i++)
    {
        result = gcd(metric[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
   return result;
}




void main()
{
 FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read; 
	int arr[100];
	
     fp = fopen("input.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
        int i=0,x=15;
        int num;
	while( fscanf(fp, "%d",&num) != EOF )
    	{
        	arr[i++]=num;
    	}
   
	int ans =findGCD(arr,i);
	printf("%d",ans);
}



