#include<stdio.h>
int main()
{
    for(int n = 0; ; n++){
        int x = n * n;
        if(x < 1000){
            continue;
        }
        if(x > 9999){
            break;
        }
        int hi = x / 100;
        int lo = x % 100;
        if(hi / 10 == hi % 10 && lo / 10 == lo % 10){
            printf("%d\n",x);
        }
    }
    return 0;
}