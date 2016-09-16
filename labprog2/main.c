#include <stdio.h>
int main ()
   {
     int a,rev=0,temp,mod;
     
     printf("enter the number to reverse\n");
     scanf("%d",&a);
     temp=a;
     while (temp!=0)
     
       { 
         mod=temp%10;
         rev=(rev*10)+mod;
         temp=temp/10;
       }
         if(a==rev)
         printf("%d is a palindrome",a);
        else
         printf("%d is not a palindrome",a);
    return 0;
  }
  
