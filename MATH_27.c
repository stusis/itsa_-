/*
問題描述：
試寫一個程式，輸入兩個整數，並計算兩整數間所有整數的總和。

輸入說明：
輸入兩個整數。

輸出說明：
輸出兩整數之間所有整數的總和。
*/

#include<stdio.h>

int main()
{
    int num1,num2;
    int result = 0;
    scanf("%d %d",&num1,&num2);
    for(int i=num1;i<=num2;i++){
        result += i;
    }
    printf("%d\n",result);
}