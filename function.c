#include<stdio.h>
 
 int addition(int no1,int no2)
   {
       int res;
       res=no1+no2;
       return res;
   }

 int substraction(int no1,int no2)
   {
       int res=0;
       res=no1-no2;
       return res;
   }

   int main()
   {
       int val1;
       int val2;
       int ret;
      int sub;
       printf("Enter first no\n");
       scanf("%d",&val1);

        printf("Enter second no\n");
       scanf("%d",&val2);

       ret=addition(val1,val2);
       printf("Addition is : %d\n",ret);

       sub=substraction(val1,val2);
       printf("substraction is : %d\n",sub);
       return 0;
   }

