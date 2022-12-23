/*
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。
*/

#include<stdio.h>

int main()
{
    int input = 0;
    int sum = 0;
    scanf("%d",&input);
    for(int i=input;i>0;i--){
        if(i % 3 == 0){
            sum = sum + i;
        }
    }
    printf("%d\n",sum);
}