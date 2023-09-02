#include<stdio.h>
void factrecursion();
int main()
{
	factrecursion();
	return 0;
}
void factrecursion()
{
	
	int n,i,fact;
	
	printf("enter the value of num");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		fact*=i;
	{	
	printf("enter the value %d %d",fact,n);	
    }
}

/*#include<stdio.h>
int main()
{
	int num,i,fact = 1;
	
	printf("enter the value");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	 fact=fact*i;
	{
		printf("enter the value %d %d",num,fact);
	}
	return 0;
}*/
	

