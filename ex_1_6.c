#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a + b > c && a + c > b && b + c > a){
        if(pow(a,2) + pow(b,2) == pow(c,2) && pow(a,2) + pow(c,2) == pow(b,2) && pow(b,2) + pow(c,2) == pow(a,2)){
            printf("no");
        }else{printf("yes");}
    }else{printf("not a triangle");}
    return 0;
}