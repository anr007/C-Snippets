#include<stdio.h>
main()
{
	int i,d;
	float f;
	struct stu
	{
		int r;
		float m;
	} s[10];
	struct stu *p;
	p=&s[0];
	for(i=0;i<10;i++)
	{
	printf("\nenter roll no of student:%d  ",i+1);
	scanf("%d",&s[i].r);
	printf("enter  marks  of student:%d  ",i+1);
	scanf("%f",&s[i].m);
    }
    	for(i=0;i<10;i++)
	{
		d=(*(p+i)).r;    /*  we can also use (p+i)->r */
		f=(p+i)->m;     /*  we can also use (*(p+i)).m */
	printf("\nroll no of student:%d is %d\n",i+1,d);
	printf("marks of  student:%d are %.2f\n",i+1,f);
    }
}
