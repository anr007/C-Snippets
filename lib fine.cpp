#include<stdio.h>
main()
{
	int d[3],m[3],y[3];
	b:printf("enter book issue date ");
	scanf("%d %d %d",&d[0],&m[0],&y[0]);
		printf("enter book return date ");
	scanf("%d %d %d",&d[1],&m[1],&y[1]);
		printf("enter assumed book return date ");
	scanf("%d %d %d",&d[2],&m[2],&y[2]);
	if(y[1]<=y[2]&&y[0]<=y[1])
	{
		if(y[1]==y[2])
		{
			if(m[1]<m[2])
			printf("\nNo Fine is Required");
			
			else if(m[1]==m[2])
			{
			   if(d[1]<=d[2])
			   {
				printf("\nNo Fine is Required");
		    	}
		    	else
		    	{
		    		int f1;
		    		f1=(d[1]-d[2])*15;
		        	printf("\nFine Amount is %d rupees",f1);
			    }
		   }
		   else
		   {
		   	if(d[1]==d[2])
		   	{
		   	int f2;
		   	f2=(m[1]-m[2])*500;
		    printf("\nFine Amount is %d rupees",f2);
			}
			else if(d[1]>d[2])
			{
		   	    int f3;
		   	    f3=(m[1]-m[2])*500+(d[1]-d[2])*15;
		        printf("\nFine Amount is %d rupees",f3);
		    }
		    else
		    {
		    	int f4;
		    	f4=(m[1]-m[2]-1)*500+(30-(d[2]-d[1]))*15;
		        printf("\nFine Amount is %d rupees",f4);
			}
		   }
		}
		else
		{
				printf("\nNo Fine is Required");
		}
	}
	else if(y[1]>y[2])
	{
	    if(m[1]>m[2])
		{
			if(d[1]==d[2])
		   	{
		   	int f5;
		   	f5=(y[1]-y[2])*1000+(m[1]-m[2])*500;
		    printf("\nFine Amount is %d rupees",f5);
			}
			else if(d[1]>d[2])
			{
		   	    int f6;
		   	    f6=(y[1]-y[2])*1000+(m[1]-m[2])*500+(d[1]-d[2])*15;
		        printf("\nFine Amount is %d rupees",f6);
		    }
		    else
		    {
		    	int f7;
		    	f7=(y[1]-y[2])*1000+(m[1]-m[2]-1)*500+(30-(d[2]-d[1]))*15;
		        printf("\nFine Amount is %d rupees",f7);
			}
		}
		else if(m[1]==m[2])
		{
			if(d[1]==d[2])
		   	{
		   	int f8;
		   	f8=(y[1]-y[2])*1000;
		    printf("\nFine Amount is %d rupees",f8);
			}
			else if(d[1]>d[2])
			{
		   	    int f9;
		   	    f9=(y[1]-y[2])*1000+(d[1]-d[2])*15;
		        printf("\nFine Amount is %d rupees",f9);
		    }
		    else
		    {
		    	int f10;
		    	f10=(y[1]-y[2]-1)*1000+(360-(d[2]-d[1]))*15;
		        printf("\nFine Amount is %d rupees",f10);
			}
		}
		else
		{
				if(d[1]==d[2])
		   	{
		   	int f11;
		   	f11=(y[1]-y[2]-1)*1000+(12-(m[2]-m[1]))*500;
		    printf("\nFine Amount is %d rupees",f11);
			}
			else if(d[1]>d[2])
			{
		   	    int f12;
		   	    f12=(y[1]-y[2]-1)*1000+(12-(m[2]-m[1]))*500+(d[1]-d[2])*15;
		        printf("\nFine Amount is %d rupees",f12);
		    }
		    else
		    {
		    	int f13;
		    	f13=(y[1]-y[2]-1)*1000+(12-(m[2]-m[1]))*500+(d[2]-d[1])*15;
		        printf("\nFine Amount is %d rupees",f13);
			}
		}
		
	}
	else
	{
		printf("\nERROR!!");
		goto b;
	}
}
