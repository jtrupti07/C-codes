#include<stdio.h>
//Entry point function
int main()
{
	int no = 11;
	
	printf("Value of No is : %d\n",no);
	
	printf("Address of no is : %p\n",&no);

	printf("Size of no is : %lu\n",sizeof(no));
	return 0;
}