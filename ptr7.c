#include<stdio.h>
int main()
{
  int arr[5]= {10,20,30,40,50};

  int *ptr1= NULL;
 /* int *ptr2= NULL;*/
  ptr1 =arr;
  ptr2 =&(arr[2]);
 // printf("%dlu\n",ptr1+ptr2);
  printf("%lu\n",(*ptr1)+(*ptr2));

  /*printf("%lu\n",ptr1);
   printf("%lu\n",ptr1+3);
    printf("%lu\n",ptr1);
    printf("%lu\n",(*ptr1)+3);*/
  return 0;
}