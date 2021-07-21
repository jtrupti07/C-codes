#include<stdio.h>
int main()
{
	double a[3][6];
	printf("%lu\n",sizeof(a));
	printf("%lu\n",sizeof(a[0][1]));
}