#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%i ",&num);	

	if(num >= 0)
	{
		printf("���밪�� %d�Դϴ�",num);
	}
	
	else 
	{
		printf("���밪�� %d�Դϴ�",num*-1);
	} 

	return 0;
}
