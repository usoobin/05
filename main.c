#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	int cnt =0;
	
	printf("input a string:");
	
	while((c=getchar())!= '\n') //�Է� ���ڰ� �������ڰ� ���ö����� �ݺ�  
	{  //���� �Էµ� �����ΰ�? ��-> �׷��ٸ� count�� �Ѱ� ���� 
		if(c >= '0' && c <='9' )
	 	{
	 		cnt = cnt + 1;
	 	}
		//�� ������ �ݺ� 
	};
	
	printf("the number of digit is %i",cnt);
	
	return 0;
}
