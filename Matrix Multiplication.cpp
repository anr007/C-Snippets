#include<stdio.h>
main()
{
int i,j,k,l;
int r,c,u;
b:printf("Enter the no.of rows and columns in matrix:1 ");
scanf("%d %d",&i,&j);
printf("\nEnter the no.of rows and columns in matrix:2 ");
scanf("%d %d",&k,&l);
int m1[i][j],m2[k][l];
if(j==k)
printf("\nEnter %d elements of first matrix in row wise manner \n",(i*j));
else
{
	printf("		ERROR!!!\n");
goto b;
}
for(r=0;r<i;r++)
{
	for(c=0;c<j;c++)
	{
		scanf("%d",&m1[r][c]);
	}
}
printf("\nEnter %d elements of second matrix in row wise manner \n",(k*l));
for(r=0;r<k;r++)
{
	for(c=0;c<l;c++)
	{
		scanf("%d",&m2[r][c]);
	}
}
int p[i][l]={(0),(0)};
for(r=0;r<i;r++)
{
	for(c=0;c<j;c++)
	{
		for(u=0;u<l;u++)
		{
			p[r][c]= p[r][c] + m1[r][u]*m2[u][c];
		}
	}
}
printf("\nThe product of two matrices is\n");
for(r=0;r<i;r++)
{
	for(c=0;c<j;c++)
	{
		printf("%d ",p[r][c]);
	}
	printf("\n");
}
}
