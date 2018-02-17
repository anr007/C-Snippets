#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("enter any string ");
	gets(s);
	int i=0,j,k;
	j=strlen(s);
	k=j-1;
	while(s[i]==s[k]&&s[i]!=' '&&s[k]!=' ')
	{
		if(i==k)
		{
		  if(s[i]!=' '&&s[k]!=' ')
		   {
			break;
	       }
		}
	    else
		{
		  i++;
		  k--;
		}
	}
	if(i==k)
	{
		if(s[i]!=' '&&s[k]!=' ')
		printf("it is a palindrome");
		else
		printf("it is not a palindrome");
	}
	
	else
	{
	printf("it is not a palindrome");
    }
}
