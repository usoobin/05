#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int num;
	
	printf("���� �ϳ��� �Է��Ͻÿ�.");
	scanf("%d",&num);
	
	
	if(num > 0)
	{
		printf("����Դϴ�.");
	}
	
	else if(num < 0)
	{
		printf("�����Դϴ�.");
	} 
	
	else
	{
		printf("0�Դϴ�");
	 } 
	
	
	
	return 0;
	
	
	
}
