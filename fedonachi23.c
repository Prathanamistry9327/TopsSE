#include<stdio.h>
void factrecursion();
int main()
{
	factrecursion();
	return 0;
}
void factrecursion()
{
	
	int n1=0,n2=1,n3,i,num;
	printf("enter the value of number");
	scanf("%d",&num);
	
	printf("\n %d%d",n1,n2);
	for(i=2;i<=num;i++)
	{
		n3 = n1 + n2;
		printf("%d",n3);
		n1 = n2;
		n2 = n3;
	}
}


