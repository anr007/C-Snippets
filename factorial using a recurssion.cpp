#include<stdio.h>
int fact(int);
main()
{
int n,c;
printf("enter any number ");
scanf("%d",&n);
c=fact(n);
printf("%d",c);
}
int fact(int num)
{
	if(num==1)
	return 1;
	else
	return(num*fact(num-1));
}
