#include<stdio.h>
#include<string.h>
int p(int,int);
main()
{
	char a[20];
	int s=0;
	int i,l,k;
	b:printf("\nenter a binary number ");
	gets(a);
	l=strlen(a);
	k=l-1;
	for(i=0;i<l;i++)
	{
		if(a[i]=='1')
		{
		 s=s+(1*(p(2,k)));
			 k--;
		}
		else if(a[i]=='0')
		{
			s=s+(0*(p(2,k)));
			k--;
		}
		else
		{
		printf("it is not a binary number");
		goto b;
	    }
    }
    printf("decimal form is %d",s);
	
}
int p(int a,int b)
{
if(b==1)
return a;
else if(b==0)
return 1;
else
return (a*(p(a,(b-1))));
}
