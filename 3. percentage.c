#include<stdio.h>
#include<math.h>
void main()
{
 float sub1,sub2,sub3,sub4,avg;
 printf("Enter sub1,sub2,sub3,sub4");
 scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);
 avg = (sub1+sub2+sub3+sub4)/4;
 printf("average=%f", avg);
 if(avg >= 70)
 {
printf("\nDistinction");
 }
else if(avg <= 60 && avg>40)
 {
printf("\nSecond Class");
 }
 else if(avg <= 70 && avg>60)
 {
printf("\nFirst Class");
 }
 else if(avg <=40 )
 {
printf("\nFail");
 }
}
