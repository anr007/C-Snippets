#include<stdio.h>
int g(int,int,int);
int l(int,int,int);
main()
{
	int a[5],i,j,k,m;
	printf("enter any 5 digits \n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	j=g(a[0],a[1],a[2]);
	k=l(j,a[3],a[4]);
	m=l(a[0],a[1],a[2]);
	if(m>k)
	{
			printf("%d is the second largest",k);
	}
	else
	{
		printf("%d is the second largest",m);
	}
}
int g(int a,int b,int c)
{
	int d,e,i,f;
	d=a>b;
	e=b>c;
	f=c>a;
	
	if(d==1&&e==1)
	return b;
	if(d==0&&e==0)
	return b;
	if(d==1&&e==0&&f==1)
	return a;
	if(d==1&&e==0&&f==0)
	return c;
	if(d==0&&e==1&&f==1)
	return c;
	if(d==0&&e==1&&f==0)
	return a;
	
}
int l(int a,int b,int c)
{
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}
