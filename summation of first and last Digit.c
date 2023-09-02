#include<stdio.h>
int main()
{
	int n,i;
	
	printf("enter the number");
	scanf("%d",&n);
	printf("***************** even number are********************");
	for(i=2;i<=n;i=i+2)
	{
		printf("%d \n",i);
	}
	
	printf("*************** odd number are *********************");
	
	for(i=1;i<=n;i=i+2)
   {
   	printf("%d \n",i);
	   }	
	return 0;
}

