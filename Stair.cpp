#include<stdio.h>
main()
{
	int a,i,j;
	printf("Enter any for a stair ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("#");
	    }
	    printf("\n");
	}
	
}
