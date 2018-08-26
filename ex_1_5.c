#include<stdio.h>
int main()
{
  int n;
  float m;
  scanf("%d",&n);
  m = 95 * n;
  if(m >= 300){
    m = m * 0.85;
  }
    printf("%.2f",m);
  return 0;
}
