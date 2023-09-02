#include<stdio.h>
int main()
{
	int a,b,cal,sum;
	
	printf("enter the value of number");
	scanf("%d%d%d",&a,&b,&cal);
	
	switch(cal)
	
	{
		case 1:
			printf("enter the value of add %d",a+b);
			break;
		case 2:
			printf("enter the value of sub %d",a-b);
			break;	
		case 3:
			printf("enter the value of malti %d",a*b);
			break;
		case 4:
			printf("enter the value of dive %d",a/b);
			break;
	    			
	
   }
   return 0;
}

