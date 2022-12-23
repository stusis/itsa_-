/*
問題描述：

給定二個正整數，利用輾轉相除法求其最大公因數。

輸入說明：

給定二個正整數

輸出說明：

輸出最大公因數
*/

#include<stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    while(num2 != 0){
        int tmp = num1 % num2;   //當tmp=0時即最後num2=0，就是找到最大公因數了
        num1 = num2;
        num2 = tmp;
    }
    printf("%d\n",num1);
}