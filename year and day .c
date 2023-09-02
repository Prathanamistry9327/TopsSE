#include<stdio.h>
int main()
{
	int a='years',b='days';
	
	printf("enter the value of %d%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("befor the value of %d%d",a,b);
	return 0;
	
}

