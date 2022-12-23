/*
題目描述:
算階乘

輸入說明:
輸入一個整數 n，0 < n < 20

輸出說明:
輸出答案
*/

#include<stdio.h>

int main()
{
    int input;
    long result = 1;
    scanf("%d",&input);
    if(input > 0 && input < 20){
        for(int i=1;i<=input;i++){
            result *= (long)i;
        }
        printf("%ld\n",result);
    }
}