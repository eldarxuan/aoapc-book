#include<stdio.h>
#include<math.h>
int main()
{
const double pi = 3.1415926;
double r,h,s1,s2,s;
scanf("%lf%lf",&r,&h);
s1=pi*r*r;
s2=2*pi*r*h;
s=s2+s1*2.0;
printf("Area = %.3f\n",s);
return 0;
}
