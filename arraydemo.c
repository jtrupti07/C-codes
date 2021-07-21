#include<stdio.h>
//
int main()
{
	int a[5]={1,2,3,4,5};
 
       
     printf("size of whole array is %lu\n",sizeof(a));
     printf("size of sinle element of array is %lu\n",sizeof(a[0]));
      printf("base address of array is %lu\n",a); 
      //printf("%d\n",a[3]);


	return 0;
}