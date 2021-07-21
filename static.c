#include<stdio.h>
void fun();
void gun();
extern int value;
int main()
 {
     printf("Inside Main \n");
     printf("%d \n",value);
  	 fun();  
      fun();  
      fun();
  
      gun();
      gun();
      gun();

  	
     return 0;
 }
 void fun()                     //function defination
  {
  	 auto int no =10;
     no++;
     printf("From fun : %d\n",no);
  }
  void gun()
  {
    static int no =10;    //  local static it preserve the value of variable
    no++;
    printf("From gun : %d\n",no);

  }