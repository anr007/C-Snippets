#include<stdio.h>
#include<string.h>
char s[100],n[100],d[100];
int k;
int cmp(int);
main()
{
	
	int i=0,j=0,l;
	printf("enter any thing ");
	gets(s);
	printf("enter any word which you want to delete ");
	gets(d);
	k=strlen(d);
	while(s[i]!='\0')
	{
	   
		if(cmp(i)==1)
		i=i+k;
	
	   else
	   {
	   n[j]=s[i];
	    i++,j++;
	   }
    }
    n[j]='\0';
    printf("%s",n);
    
}
int cmp(int i)
{
	int m,f=i;
	for(m=0;m<k;m++)
	{
		if(s[i]==d[m])
		i++;
		else
		break;
	}
	if(i==f+k)
	return 1;
	else
	return 0;
}

