#include<stdio.h>
int main()
{
	 int a,b,c;
	printf("Enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
		printf("max=%d",a);
	    }
		else 
		// a<c
		{
		printf("max=%d",c);
		}
	}
	
	else 
	//b>a
	{
	if (b>c)
	{
		printf("max=%d",b);
	}
	else 
	// c>b
	{
		printf("max=%d",c);
	}
}
    if(a<b)
    {
    	if (a<c)
    	{
    		printf("\nmin=%d",a);
		}
		else // c<a
		{
			printf("\nmin=%d",c);
		}
	}
	else //b<a
	{
		if(b<c)
		{
			printf("\nmin=%d",b);
		}
		else // c<b
		{
			printf("\nmin=%d",c);
		}
	}
}
		

