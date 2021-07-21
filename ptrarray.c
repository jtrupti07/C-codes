#include<stdio.h>
int main()
{
double  no1 =10.1,no2 = 20.1,no3=30.1,no4= 40.1;
double *arr[4];
double *arr[4] = {&no1,&no2,&no3,&no4};
  double *arr[4];

 /* double no1 =10.1;
  double no2 =20.1;
  double no3 =30.1;
  double no4 =40.1;
 
  arr[0]=&no1;
  arr[1]=&no2;
  arr[2]=&no3;
  arr[3]=&no4;*/
 
  printf("%lu\n",arr);                 //100
   printf("%lu\n",arr[0]);             //200
    printf("%lf\n",no1);           //10.1
     printf("%lu\n",&no3);         //400
      printf("%d\n",sizeof(arr));   //32 or 16
       printf("%d\n",sizeof(no2));   //8
        printf("%lu\n",&(arr[3]));   //124
         printf("%lf\n"),*(arr[3]); //40.1

  return 0;
}