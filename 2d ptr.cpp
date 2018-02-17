#include<stdio.h>
main()
{
	int c,r;
	printf("enter no.of rows of matrx ");
	scanf("%d",&r);
	printf("enter no.of columns of matrx ");
	scanf("%d",&c);
	
	int a[r][c],j,i;
	int (*p)[c];
	printf("enter any values \n");
	for(i=0;i<r;i++)
	{
      for(j=0;j<c;j++)
      {
	  scanf("%d",&a[i][j]);
      }
    }
    p=a;   /* pointer should be initiated as (*ptr_name)[no.of columns] as ptr can only access rows*/
           /* if u want to use normal ptr initiation method change the access method as (*(p[i]+j)) */
    printf("The reqiured matrix is \n");
    for(i=0;i<r;i++)
	{
		printf("| ");
       for(j=0;j<c;j++)
      {
	   printf("%d  ",*(*(p+i)+j));
      }
      printf("|");
      printf("\n");
    }
    
}
