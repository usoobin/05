#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
   int num;
   int cnt = 0;
   int answer = 59;
   
  
   do
   {
   	
   	printf("guess a number:");
   	scanf("%d",&num);
   	
      if(answer > num)
      {
         printf("low!");
      };
      
      if(answer < num)
      {
         printf("high!");
      };
      
      cnt = cnt + 1;
   }
   while (answer != num);
   

   
   printf("congratulation: trials: %i",cnt);
   
   return 0;
}
