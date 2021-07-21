#include<stdio.h>
int main()
{
  int arr[5]= {10,20,30,40,50};
  int *p =NULL;
  int *q =NULL;

  printf("%lu\n",arr);
  printf("%lu\n",&arr);
  printf("%lu\n",&(arr[0]));
   printf("%lu\n",sizeof(arr));
  printf("%lu\n",arr+1);
   printf("%lu\n",&arr+1);
  printf("%lu\n",arr+2);
  printf("%lu\n",&arr+2);

  p= arr;
  q=&arr;
  printf("%lu\n",p+2);  //104
   printf("%lu\n",p++);
  printf("%lu\n",q+2);   //104

  
  

  return 0;
}
