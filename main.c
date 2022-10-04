#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sum=0;
	int num;
	int a = 0;
	int i;
	
	printf("input a number:");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
	
		sum = sum + i;
	}
	
	
	printf("the number of digit is %i",sum);
	
	return 0;
}
