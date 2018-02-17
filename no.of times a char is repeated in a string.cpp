#include<stdio.h>
main()
{
	char name[20];
	char d;
	printf("enter anything ");
	scanf("%s",name);
	printf("\nenter any character in the above word ");
	scanf(" %c",&d);
    int n,i=0;
    while(name[i]!='\0')
    {
    	if(name[i]==d)
    	n++;
    	i++;
	}
	if(n==0)
	printf("the character '%c' is not in the entered word",d);
	else
	printf("\nthe character '%c' is repeated %d time(s)",d,n);
} 
