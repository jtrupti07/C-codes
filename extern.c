#include<stdio.h>


//void fun();
//global variables
int no1 = 10;             //non BSS of datasection
int no2;    
extern int value;
extern void fun();              //BSS of datasection
int main() 
 {
    printf("Inside main\n");
    printf("%d\n",no1);
     printf("%d\n",no2);
     printf("%d\n",value);
     fun();
     return 0;
 }
 /*void fun()                     
  {
  	 
  }*/