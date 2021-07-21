#include<stdio.h>
#include<string.h>

int main()
{
	char str1[6]="Hello";
	char str3[]="Demo";
	int ret=0;
	/* 1. 
	char str2[]="Hello";
	char str3[]={'H','e','l','l','o','\0'};

	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("Length of string is %d\n",strlen(str1)); //5
	printf("sizeof string is :%d\n",sizeof(str1));   //6
	*/

	/* 2.
	char arr[10];
	strcpy(arr,str1);
	printf("Data after copy is : %s\n",arr);
	*/
	char str2[]="Demo";
	strcat(str1,str2);
	printf("Data after concatination is %s\n",str1);
	printf("Length of string is %d\n",strlen(str1)); //5

	ret=strcmp(str2,str3);
	if(ret==0)
	{
		printf("Strings are Same\n");
	}
	else
	{
		printf("Strings are not Same\n");
	}

	return 0;
}