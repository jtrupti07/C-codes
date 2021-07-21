#include<stdio.h>

int main()
{
	//i is variable of type integer initialised with value 11
    int i = 11;
 
   // ip is variable of type integer pointer which stores address of i 
    int *ip =  &i;

    char c = 'a';
    char *cp = &c;

    printf("Value of no is : %d \n",i);
    printf("Address of no : %lu\n",&i);
    printf("Value of ip is : %lu \n",ip);
    printf("Address of ip : %lu\n",&ip);
	printf("data pointed by ip is: %d\n",*ip);
	printf("Size of the i is:  %d\n",sizeof(i));
	printf("Size of the ip is:  %d\n",sizeof(ip));
   
    printf("Value of no is : %c \n",c);  //a
    printf("Address of no : %lu\n",&c);   //300
    printf("Value of cp is : %lu \n",cp);  //300
    printf("Address of cp : %lu\n",&cp);   //400
	printf("data pointed by cp is: %c\n",*cp);  //a
	printf("Size of the c is:  %d\n",sizeof(c));  //1
	printf("Size of the cp is:  %d\n",sizeof(cp));  //8
   

	return 0;
}