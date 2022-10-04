#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i,num;
	int sum =0;
	
	printf("input a number:");
	//scanf("%d",&num);
	
	
	for(i=1; i<= 4; i++)
	{
		sum = i+sum;
	
	}
	
		printf("THE RESULT IS %d",&sum);

	
	
	
	return 0;
	
	
	
}
