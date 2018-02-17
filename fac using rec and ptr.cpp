                    /*factorial using recussion and pointer*/

#include<stdio.h>
int fact(int *);
main()
{
int *a,n,d;
printf("enter any number ");
scanf("%d",&n);
d=fact(&n);
printf("%d",d);
}
int fact(int *r)
{
	int c,d,e;
	c=*r;
	if(c==1)
	return 1;
	else
	{
	e=c-1;
    return(c*fact(&e));
    }
}
