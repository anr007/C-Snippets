#include<stdio.h>
main()
{
	int s1r,s1c,s2r,s2c,i,j;
	printf("size of array:1 (rxc) \n");
	scanf("%d%d",&s1r,&s1c);
	printf("size of array:2 (rxc) \n");
	scanf("%d%d",&s2r,&s2c);
	int a1[s1r][s1c],a2[s2r][s2c],s[s1r][s1c];
	if(s1r==s2r&&s1c==s2c)
	e:printf("enter elements in array:1 \n");
	else
	{
		printf("error!!");
		goto e;
	}
	for(i=0;i<s1r;i++)
	{
	for(j=0;j<s1c;j++)
	{
		scanf("%d",&a1[i][j]);
	}
	}
	printf("enter elements in array:2 \n");
	for(i=0;i<s1r;i++)
	{
	for(j=0;j<s1c;j++)
	{
		scanf("%d",&a2[i][j]);
	}
	}
	for(i=0;i<s1r;i++)
	{
	for(j=0;j<s1c;j++)
	{
	 s[i][j]=a1[i][j]+a2[i][j];
	}
    }
     printf("the resultant sum is\n");
    for(i=0;i<s1r;i++)
	{
	for(j=0;j<s1c;j++)
	 printf("%d ",s[i][j]);
	 printf("\n");
    }
}
	
