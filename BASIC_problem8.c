/*
問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

輸入說明：
輸入一個正整數。

輸出說明：
質數顯示 YES ；非質數顯示 NO 。
*/

#include<stdio.h>

int main()
{
    int input = 0;
    scanf("%d",&input);
    if(input > 0 && input == 1){                 // 1另外處理，非質數
        printf("NO\n");
    }
    else{
        for(int i=2; i*i<=input; i++){           //找一半就好，超過開根號的不考慮
            if(input%i == 0){
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
}