#include "program.h"

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findlcm(int metric[], int count)
{
    // Initialize result
    int ans = metric[0];
 
    // ans contains LCM of metric[0], ..metric[i]
    // after i'th iteration,
    for (int i = 1; i < count; i++)
        ans = (((metric[i] * ans)) /
                (gcd(metric[i], ans)));
 
    return ans;
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
   
	int ans =findlcm(arr,i);
	printf("%d",ans);
}

