#include<stdio.h>
void fun();
int main()
 {
     printf("Inside Main \n");
  	 fun();      
  	 // printf("%d\n0",no3);               //function call
     return 0;
 }
 void fun()                     //function defination
  {
  	 int no =11;
  	 auto int no1 = 21;
  	 register int no2=21;
  	 printf("%d\n",no1);
     printf("%d\n",no2);
  	 printf("Inside Function \n");
  }