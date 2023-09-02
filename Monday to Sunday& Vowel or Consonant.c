//vowel or consonant
#include<stdio.h>
int main()
{
	char day;

	printf("enter the value of vowels and consonant");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
		    printf("tuesday");
			break;
		case 3:
		    printf("wensday");
			break;
		case 4:
		     printf("thusday");
			 break;
		case 5:
		    printf("fredat");
			break;
        case 6:
		    printf("satrday");
			break;
		case 7:
		    printf("sunday");
			break;
		default:
		printf("it is not a day");	 			
	}
	return 0;
}
/*//vowel or consonant
#include<stdio.h>
int main()
{
	char vowels;

	printf("enter the value of vowels and consonant");
	scanf("%c",&vowels);
	
	switch(vowels)
	{
		case 'a':
			printf("a,b,c,d");
			break;
		case 'e':
		    printf("e,f,g,h");
			break;
		case 'i':
		    printf("i,m,n,p");
			break;
		case 'o':
		     printf("o,q,r,s");
			 break;
		case 'u':
		    printf("t,v,w,x,y,z");
			break;
		default:
		printf("it is not a vowelse");	 			
	}
	return 0;
}

