#include<stdio.h>
#include<string.h>
int p(int,int);
int b2d(void);
int bin(int);
int f=1;
main()
{
	printf("\n                        PRODUCT OF TWO BINARY NUMBERS            \n");
	int d1,d2,p;
	d1=b2d();
	d2=b2d();
	p=d1*d2;
	printf("\nThe product in decimal form is %d\n",p);
	bin(p);
	
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
int b2d(void)
{
	char a[20];
	int s=0;
	int i,l,k;
	b:printf("\nenter binary number:%d ",f);
	f++;
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
		printf("\n        Error!!\nit is not a binary number           \n");
		f--;
		goto b;
	    }
    }
    return s;
	
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

	printf("\nThe product in binary form is ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",s[j]);
	}
}
