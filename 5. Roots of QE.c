#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float roots,r1,r2,r,x,y;
	printf("enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if (D>0)
	{
		printf("roots are real and distinct");
		r1=(-b+sqrt(D))/(2*a);  
		r2=(-b-sqrt(D))/(2*a);
		printf("\n r1=%f",r1);
		printf("\n r2=%f",r2);
	}
	else if (D==0)
	{
		printf("roots are real and equal");
		roots=(-b/2*a);
		printf("\n r is %f",roots);
	}
	else 
	{
		printf("roots are imaginary");
	    x=-b/(2*a);
        y= sqrt(-D)/(2*a);
        printf("\n r1= %f+i(%f)",x,y);
		printf("\n r2= %f-i(%f)",x,y);
    }
    
}
