#include<stdio.h>
#include<string.h>

int main()
{
	char a[20];
	int i,n;
	int flag =0;
	
	printf("enter the string:");
	scanf("%s",&a);
	
	n = strlen(a);
	
	for(i=0;i<a;i++)
	{
		if(a[i]!=a[n-i-1])
	{
	
	flag = 1;
	break;
    }
  }
  if(flag)
  {
  	printf("%c is not a palindrome",a);
  }
  else
  {
  	printf("%c is a palindrome",a);
  }
  return 0;
}

