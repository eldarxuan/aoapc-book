#include<stdio.h>
int main()
{
    double sum = 0;
    for(int i = 0; ; i++) {//for(初始化; 条件; 调整)
        double term = 1.0 / (i*2+1);
        if(i % 2 == 0) sum += term;
        else sum -= term;
        if(term < 1e-6) break;//do while 的while部分，这里用if来在for循环末尾做个break条件判断
    }
    printf("%.6f\n",sum);
    return 0;
}