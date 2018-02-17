#include<stdio.h>
main()
{
	char s[100],n[100];
	int i=0,j=0;
	printf("enter any thing ");
	gets(s);
	while(s[i]!='\0')
	{
	   if(s[i]=='t'&&s[i+1]=='h'&&s[i+2]=='e')
	   i=i+3;
	   else
	   {
	   n[j]=s[i];
	    i++,j++;
	   }
    }
    n[j]='\0';
    printf("%s",n);
    
}
