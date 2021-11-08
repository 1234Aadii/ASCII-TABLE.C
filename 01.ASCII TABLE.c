//ASCII TABLE

#include <stdio.h>
#include <conio.h>

int main()
{
   int No = 0;
  
   printf("\n ASCII TABLE => \n\n");
   for(No = 0; No < 128; No++)
   {
     printf("\n\t\t %3d = %c.",No,No);
     
   }
    
    printf("\n Thanks For Using Our Service...");
    
   
   getch();
   return 0;
 }