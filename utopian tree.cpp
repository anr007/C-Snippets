#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("\t\t\tUTOPIAN TREE");
	int n;
	printf("\nenter no.of cycles ");
	scanf("%d",&n);
	int i,h=1;
	if(n==0)
	{
	printf("\nits initial height is %d",h);
	exit (1);
    }
    for(i=1;i<=n;i++)
	{
		
	 if(i%2==0)
	{
		 h=h+1;
	  
	}
	else
	{
	   h=2*h;
	}
    }
    printf("\nits height after %d cycle(s) is %d",n,h);
}
