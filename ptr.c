#include<stdio.h>
int main()
{
  //no is a variable of type integer initialised 
	//with value11
  int no=11;

  /* p is pointer which holds address of integer currently 
  holds address if p*/
  int *p =&no;

  /*q is pointer which holds address of int* currently it holds adddress of p*/

  int **q=&p;

  //x is pointer which holds adddress of int **
  //and currently it holds address of q

  int ***x=&q;
}