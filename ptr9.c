#include<stdio.h>
int main()
{
 char ch='a';
 int i = 11;
 float f =10.1;
 double d = 20.33;
//specific pointer
 char *cp =&ch;
 int *ip=&i;
 float *fp =&f;
 double *dp =&d;
 //generic pointer
 void *p=NULL;


 printf("%c\n",*cp);
 printf("%d\n",*ip);
 printf("%f\n",*fp);
 printf("%f\n",*dp);

 p=&ch;
// printf("%c\n",*p);  //error
 printf("%c\n",*(char*)p);//a
  p=&i;
  printf("%d\n",*(int*)p+1);
  return 0;

}