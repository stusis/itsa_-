/*
問題描述：
試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。

輸入說明：
輸入一正整數。

輸出說明：
輸出相乘的積。
*/

#include<stdio.h>

int main()
{
    int input;
    long result = 0;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        result = (long)(i*i);
        printf("%d*%d=%ld\n",i,i,result);
    }
}