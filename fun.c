#include<stdio.h>
int addition(int no1,int no2)
 {
 	int result=0;
 	result = no1 + no2;

 	return result;

 }

 int subtraction(int no1,int no2)
 {
 	int result=0;
 	result = no1 - no2;

 	return result;

 }

int main()
 {
   int value1=0,value2=0,ret=0,ret1=0;
  // int addition(int no1,int no2)
   int (*ftpr)(int,int);
   ftpr = addition;
   //if ptr is pointer which points to a function 
   //which accepts 2 integers 
   printf("Enter 1st no:\n");
   scanf("%d",&value1);
   printf("Enter 2nd no:\n");
   scanf("%d",&value2);

   ret = ftpr(value1,value2);
   ret1 = subtraction (value1,value2);
   printf("Addition is =%d\n",ret);
 	return 0;
 }