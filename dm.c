#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
  //static memory allocation
	int arr[5]; // 20 bytes
 
  //dynamic memory allocation
    int *ptr = NULL ;
    int size =5;

    printf("Enter no of that you want to allocate : \n");
    scanf("%d",&size);

    //ptr = (int*)malloc(sizeof(int)); // m alloc memory allocation
    ptr = (int *)calloc(size,sizeof(int));  // c calloc calculated allocation
     if(ptr == NULL)
     	{
     		printf("Unable to allocate memory");
     		return -1;
     	}


   printf("Dynamic memory gets allocate in heap at address : %lu\n",ptr );
    ptr = realloc(ptr,8*sizeof(int)); 
   printf("Dynamic memory gets reallocate in heap at address : %lu\n",ptr );
     	
     	/*ptr[0]=10;
     	ptr[1]=20;
     	ptr[2]=30;*/
        
        printf("Elements are : %d%d%d\n",ptr[0],ptr[1],ptr[2]);
         
        printf("%d",sizeof(ptr));
        printf("%d",sizeof(*ptr));

        printf("free the allocate memory\n");
       // free(ptr);
         printf("Dynamic memory gets allocate in heap at address : %lu\n",ptr );
	return 0;
}