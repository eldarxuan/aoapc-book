#include<stdio.h>
int main()
{
    int x;
    for(int A = 1; A <=9; A++){
        for(int B = 0; B <=9; B++){
            for(int C = 0; C <=9; C++){
                x = A*A*A + B*B*B + C*C*C;
                if(x >= 100 && x <= 999 && x == A*100 + B*10 + C){
                    printf("%d\n",x);
                }
            }
        }
    }
    return 0;
}