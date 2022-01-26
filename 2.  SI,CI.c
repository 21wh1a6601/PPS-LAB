#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,SI,CI;
	printf("enter the values of p,r,t");
	scanf("%f %f %f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("simple interest=%f",SI);
	CI=p*(pow((1+r/100),t))-p;
	printf("\ncompound interest =%f",CI);
}
