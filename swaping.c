#include<stdio.h>

int main()
{
	int a=10,b=20;
	
	printf("\n before swapping value of a and b is%d %d",a,b);
    
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n after swapping value of a and b is %d %d",a,b);
	
	return 0;	 
	
}

