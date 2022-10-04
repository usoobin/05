#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	int cnt =0;
	
	printf("input a string:");
	
	while((c=getchar())!= '\n') //입력 문자가 개형문자가 나올때까지 반복  
	{  //만약 입력된 숫자인가? 참-> 그렇다면 count가 한개 증가 
		if(c >= '0' && c <='9' )
	 	{
	 		cnt = cnt + 1;
	 	}
		//이 구간이 반복 
	};
	
	printf("the number of digit is %i",cnt);
	
	return 0;
}
