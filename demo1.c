


#include<stdio.h>
//Entry point function
int main()
{
	//int no = 11;
	
	/*printf("Value of No is : %d\n",&no);
	
	printf("Address of no is : %p\n",&no);

	printf("Size of no is : %lu\n",sizeof(no));*/
	char ch = 'M';
	int n = 11;
	float f = 10.22;
	double d = 9.633353;

	printf("Size of character : %lu\n",sizeof(ch));
	printf("Size of int : %lu\n",sizeof(n));
	printf("Size of float : %lu\n",sizeof(f));
	printf("Size of double : %lu\n",sizeof(d));
	return 0;
}