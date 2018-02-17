#include<stdio.h>
#include<string.h>
void word(char a[]);
int l;
main()
{
	int a;char s[40];
	printf("enter any number \n");
	scanf("%s",s);
	l=strlen(s);
	word(s);
}
void word(char s[])
{
	int i;
		for(i=0;i<l;i++)
		{
		if(s[i]=='1')
		printf(" one \n");
		else if(s[i]=='2')
		printf(" two \n");
		else if(s[i]=='3')
			printf(" three \n");
		else if(s[i]=='4')
			printf(" four \n");
		else if(s[i]=='5')
			printf(" five \n");
		else if(s[i]=='6')
			printf(" six \n");
		else if(s[i]=='7')
			printf(" seven \n");
		else if(s[i]=='8')
			printf(" eight \n");
		else if(s[i]=='9')
			printf(" nine \n");
			else if(s[i]=='0')
			printf(" zero \n");
			else
			printf(" not a number \n");
		}
}
