#include<stdio.h>
int main()
{
    int n2,count = 0;
    scanf("%d",&n2);
    long long n = n2;//C99中新增的long long解决了10的9次方边界条件取值会溢出的问题
    while(n > 1){
        if( n % 2 == 0){
            n /=2;
        }else{n = 3*n +1;}
        count++;
    }
    printf("%d\n",count);
    return 0;
}





//测试样例:987654321
//输出答案:180