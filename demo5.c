#include<stdio.h>
int addition ( int,int); //forward declarations

int main()               //entry point function
{
     //local variables
	int no1=0,no2=0;      //local variable
	int result = 0;

	printf("\n Enter first Number:\n");
    scanf("%d",&no1);
	printf("\n Enter Second Number:\n");
    scanf("%d",&no2);
    result=addition(no1,no2);
    printf("\n Addition is : %d\n",result);
    	return 0;
}

int addition (int value1,int value2)
 {
 	 int ans = 0;                           //local variable
      ans = value1 + value2;
      return ans;

 }