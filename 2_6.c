#include<stdio.h>
int main()
{
    double sum = 0;
    double n = 1;
    int count = 0;
    double a;
    //printf("1e-6 = %f\n",1e-6);//确认一波1e-6的大小
    while(n >= 1e-6){
        count++;
        //printf("count = %d\n",count);
        if(count % 2 == 0){//只有int可以做取余计算
            a = -1;
        }else{a = 1;}
        //printf("a = %f\n",a);
        double count2 = count;
        n = 1 / (2 * count2 - 1);
        //printf("n = %f\n",n);
        sum = sum + a*n;//注意a要放在这里乘进去,如果放在n的计算里面，就gg
    }
    printf("%.6f\n", sum);
    return 0;
}