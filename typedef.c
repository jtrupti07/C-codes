#include<stdio.h>

//typedef oldname newname;

int main()
{
	typedef int no;
	typedef int * pno;
	typedef int * ppno;

    no n = 11;
    pno p = &no;
    ppno q=&p;

    printf("%d")

	return 0;
}