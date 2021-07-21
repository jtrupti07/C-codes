#include<stdio.h>

int main()
  {
      int arr[5]={10,20,30,40,50};

      printf("\n%d",arr[0]); //10
      printf("\n%d",sizeof(arr));//20
      printf("\n%lu",arr);//100
      printf("\n%lu",&arr); //100
      printf("\n%1u",&(arr[0]));//100
      printf("\n%d",sizeof(arr[1]));//4
      return 0;
  }