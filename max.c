#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter tyhe value");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a maximum numbe");
		}
		else
		{
			printf("c minimum number");
		}
	}
	  else if(b>c)
	{
		printf("b is maximum number");
	}	
	else
	{
		printf("c is maximum number");
	}
	
	return 0;
}

