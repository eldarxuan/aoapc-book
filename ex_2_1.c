#include<stdio.h>
int main()
{
    int A,B,C;
    for(int i = 1; ; i ++){
        if(i < 100)continue;
        if(i > 999)break;
        A = i / 100;
        B = i / 10 - A*10;
        C = i % 10;
        if(A*A*A + B*B*B + C*C*C == i)printf("%d\n",i);
    }
    return 0;
}