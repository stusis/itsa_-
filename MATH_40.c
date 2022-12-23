/*
問題描述：
撰寫一個程式，輸入一個正整數 N ( 0 < N < 100 ) ，計算 1 ～ N 之間 的總和。

輸入說明：
輸入一個正整數。

輸出說明：
輸出總和，顯示格式如範例。
*/

#include<stdio.h>

int main()
{
    int input;
    int result = 0;
    scanf("%d",&input);
    if(input > 0 && input < 100){    
        for(int i=1;i<=input;i++){
            result += i;
            if(i == 1){                   //input = 1 只要印 1 = 1
                printf("%d ",i);
            }
            else
                printf("+ %d ",i);
        }
    }
    printf("= %d\n",result);
}