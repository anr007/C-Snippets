#include<stdio.h>
#include<string.h>
int p(int a,int b);
main()
{
	char z[30];
	int i,l,m,n;
	int s=0;
	b:printf("any hexa decimal number (in 0X________ format): 0x");
		scanf("%s",z);
		l=strlen(z);
		m=l-1;
	for(i=0;i<l;i++)
	{
		if(n=(z[i]=='1'||z[i]=='2'||z[i]=='0'||z[i]=='3'||z[i]=='4'||z[i]=='5'||z[i]=='6'||z[i]=='7'||z[i]=='8'||z[i]=='9'))		
		{
		
		z[i]=z[i]-48;
		 s=s+(z[i]*(p(16,m)));
	      m--;
	    }
	    else if(n=(z[i]=='A'||z[i]=='B'||z[i]=='C'||z[i]=='D'||z[i]=='E'||z[i]=='F'))
	    {
		
	      z[i]=z[i]-55;
		 s=s+(z[i]*(p(16,m)));
	      m--;
        }
        else if((n=z[i]=='a'||z[i]=='b'||z[i]=='c'||z[i]=='d'||z[i]=='f'||z[i]=='e'))
		{
		z[i]=z[i]-87;
		s=s+(z[i]*(p(16,m)));
	    m--;
		}
		else
		{
			printf("\nerror!! not a hex digit\n");
			goto b;
		}
		
    }
	printf("the number in decimal form is %d",s);

}

int p(int h,int j)
{
if(j==1)
return h;
else if(j==0)
return 1;
else
return (h*(p(h,(j-1))));
}
