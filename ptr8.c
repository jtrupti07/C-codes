#include<stdio.h>
int main()
{
  /*int arr[5]= {10,20,30,40,50};

  int *ptr1= NULL;
  int *ptr2= NULL;
  ptr1 =arr;
  ptr2 =&(arr[2]);*/
  int arr[5]= {10,20,30,40,50};

  int *ptr1= NULL;
  int *ptr2= NULL;
  ptr1 =&(arr[0]);
  ptr2 =&(arr[3]);
    printf("%d\n",ptr1-ptr2);
   printf("%lu\n",ptr1);
 / ptr1++;
   printf("%lu\n",ptr1);
   ptr1--;

  
  return 0;
}