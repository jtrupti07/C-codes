#include<stdio.h>   //standerd input output
#include<stdlib.h>  //standered library
#include<unistd.h>  //universal standerd

//void *malloc(Number of bytes);
//void *calloc(Number of elements,size of each elements);
// void *realloc(Address of old memory,number of new byte);
//void free(address);
//calloc= calculated allocation

int main()
{
    //static memory allocation
    int arr[5];//20 bytes of memory

    //Dynamic memory allocation
    int *ptr=NULL;
    int size=0;

    printf("Enter number of elements you want to allocate \n");
    scanf("%d",&size);

   // ptr=(int*)malloc(size*sizeof(int));
     ptr=(int*)calloc(size,sizeof(int));
     if(ptr==NULL)
     {
         printf("Unable to allocate\n");
         return -1;
     }
      printf("Dynamic memory allocated in the heap is %lu \n",ptr);

      ptr=realloc(ptr,8*sizeof(int));
      printf("Dynamic memory reallocated in the heap is %lu \n",ptr);
     ptr[0]=10;
     ptr[1]=20;
     ptr[2]=30;
     printf("Elements are :%d %d %d \n",ptr[0],ptr[1],ptr[2]);
     printf("%d\n",sizeof(ptr));//4
     printf("%d\n",sizeof(*ptr));//4
     printf("Deallocate the memory\n");
     free(ptr);
     return 0;


}


