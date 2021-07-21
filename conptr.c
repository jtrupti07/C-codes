#include<stdio.h>

int x=20;
int main()
{
    /*//case 1
	int no =11;
	int *p =&no;
    no++;
    p++;
    p=&x;
    (*p)=21;

    //case 2
    //no is constant integer initialised with 11
    const int no = 11;
    p is a pointer to the integer constant
    const int *p = &no;
    no++;  //na
    p++;  //a
    p=&x;  //a
    (*p)=21;*/ //na
   
  /* //case3
	//no is integer initialised with 11
    int no =11;
    //p is comstant pointer which holds address of integer
    int *const p =&no;
     no++;  //a
    p++;   //na
    p=&x;  //na
    (*p)=21;*/  //a

     //case 4
	 const int no = 11;
	// p is a constant pointer which holds address of constant integer
	 const  int *const p=&no;
     no++;  //na
     p++;   //na
     p=&x;  //na
     (*p)=21;  //na
	return 0;
}