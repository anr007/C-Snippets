#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int p(int,int);
int bin(int);
main()
{
	int i=0,a,s[30],le,n,b[30],x,u;
	char z[30];
	h:fflush(stdin);
	printf("enter decimal number ");
    scanf("%s",z);
    le=strlen(z);
    x=le-1;
    for(i=0;i<le;i++)
    {
    if(z[i]=='1'||z[i]=='2'||z[i]=='0'||z[i]=='3'||z[i]=='4'||z[i]=='5'||z[i]=='6'||z[i]=='7'||z[i]=='8'||z[i]=='9')
    {
	1;
	}
	else
	{
		printf("error!! \nNot a decimal number \n");
		goto h;	
	}
	
    }
    for(i=0;i<le;i++)
    {
    	z[i]=z[i]-48;
    	b[i]=z[i];
    }
    for(i=0;i<le;i++)
    {
    	b[i]=b[i]*p(10,x);
    	u=u+b[i];
    	x--;
	}
    bin(u);
}
int p(int h,int j)
{
if(j==1)
return h;
else if(j==0)
return 1;
else
return (h*(p(h,(j-1))));
}
int bin(int a)
{
	int i=0,j,l;
	int s[30];
	while(a!=0)
	{
		if(a==1)
		{
		s[i]=1;
		i++;
		break;
	    }
		else
		{
		l=a%2;
		s[i]=l;
		i++;
		a=a/2;
	    }
	}

	printf("the binary form is ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",s[j]);
	}
}
