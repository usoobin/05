#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	char oper;
	
	printf("enter the calculation :");
	scanf("%i %c %i",&a,&oper,&b);	

	if(oper == '+')
	{
		printf("=%i\n",a+b);
	}

	else if(oper == '-')
	{
		printf("=%i\n",a-b);
	}
	
	else if(oper == '*')
	{
		printf("=%i\n",a*b);
	}

	else if(oper == '/')
	{
		printf("=%i\n",a/b);
	}
	
	else if(oper == '%')
	{
		printf("=%i\n",a%b);
	}

	return 0;
}
