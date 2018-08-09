#include<stdio.h>
int main()
{
  int a,b,c;
  int sum;
  float t;
  scanf("%d%d%d",&a,&b,&c);
  sum = a+b+c;
  t = sum/3;
  printf("%.3f",t);
  return 0;
}
