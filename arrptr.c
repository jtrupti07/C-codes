#include<stdio.h>
int main()
{
	
	int arr[5]={10,20,30,40,50};
     /*arr[1];
     *[arr+1];*/

	printf("%d",arr[1]);
	printf("%d",*(arr+1));
	printf("%d",1[arr]);
	printf("%d",*(1+arr));
    return 0;
}