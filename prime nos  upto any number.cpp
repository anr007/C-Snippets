#include<stdio.h>
main()
{
	int a,b,c,i;
	printf("enter any no. ");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		c=0;
		for(b=1;b<i;b++)
		{
			if(i%b==0)
			c++;
		}
		if(c==1)
		printf("%d\t",i);
	}
}
