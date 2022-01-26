#include<stdio.h>
#include<math.h>
int main()
{ 
float a=9.8;
float u,t,t1,t2,s,D;
printf("enter the values of u,s");
scanf("%f %f",&u,&s);
// s=ut+(0.5*a*t*t) , 0.5*a*t*t+ut-s=0//
D=u*u-(4*0.5*a*s);
    if (D>0)
	{
		t1=(-u+(sqrt(D)))/(2*0.5*a);  
		t2=(-u+sqrt(D))/(2*0.5*a);
		printf("\n t1=%f",t1);
		printf("\n t2=%f",t2);
	}
	else 
	{
		t=(-u/2*0.5*a);
		printf("\n t is %f",t);
	}
}
