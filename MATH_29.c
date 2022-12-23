/*
問題描述：
試撰寫一個程式，可輸入一個整數，並找出小於此數的最大質數。

輸入說明：
輸入一個正整數。

輸出說明：
輸出最大質數。
*/

#include<stdio.h>

int is_prime(int input){
    for(int i=2; i*i<=input; i++){           //找一半就好，超過開根號的不考慮
            if(input%i == 0){
                return 0;
            }
        }
        return 1;
}

int main()
{
    int input;
    scanf("%d",&input);
    for(int i=input-1;i>=2;i--){             //從input-1往回找一直到2
        if(is_prime(i)){
            printf("%d\n",i);
            return 0;
        }
    }
}