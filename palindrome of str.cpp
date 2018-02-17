#include<stdio.h>
main()
{
	char a[30],b[30];
	int i,k,l,m,j;
	printf("enter any string  ");
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	l=i-1;
	for(k=0,j=l;k<l,j>=0;k++,j--)
	{
		b[k]=a[j];
	}
	k=0;
	while(a[k]==b[k]&&a[k]!='\0'&&b[k]!='\0')
	{
		k++;
	}
	if(a[k]=='\0'&&b[k]=='\0')
	printf("string is a palindrome");
	else
	printf("strings is not a palindrome");
}
