#include<stdio.h>
void arraymax();
int main()
{
	 
	arraymax();
	
	return 0;
}
void arraymax()
{
	int a[40],b[30],c[20],n;
	
	printf("enter the value of array");
	scanf("%d%d%d%d",&a[40],&b[30],&c[20],&n);
	if(a[n]>b[n])
	{
		if(a[n]>c[n])
		{
			printf("a is maximum number");
		}
		else
		{
			printf("c is maximum number");
		}
	}
	else if(b[n]>c[n])
	{
		printf("b is maximum number");
	}
	else
	{
		printf("c is maximum number");
	}
}

