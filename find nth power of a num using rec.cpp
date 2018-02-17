

#include<stdio.h>
int fact(int,int);
main()
{
int n,d,k;
printf("enter any number and power ");
scanf("%d%d",&n,&k);
d=fact(n,k);
printf("%d",d);
}
int fact(int a,int b)
{
	int j;
	j=b-1;
	if(j==0)
	return a;
	else
    return(a*fact(a,j));
    
}
