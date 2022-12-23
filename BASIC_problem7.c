/*
問題描述 ：

在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。

輸入說明 ：

第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

輸出說明 ：

每一列表一個運算結果。虛數的格式為a b。
*/

#include<stdio.h>

int main()
{
    int count = 0;
    int a,bi,c,di;
    char op;
    int sum,sum_img;
    
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf(" %c%d%d%d%d",&op,&a,&bi,&c,&di);
        if(op == '+'){
            sum = a+c;
            sum_img = bi+di;
        }
        else if(op == '-'){
            sum = a-c;
            sum_img = bi-di;
        }
        else if(op == '*'){
            sum = (a*c)-(bi*di);
            sum_img = (a*di)+(bi*c);
        }
        else if(op == '/'){
            sum = (bi*di+a*c) / (di*di+c*c);
            sum_img = (a*di-bi*c)/(di*di+c*c);
        }
        printf("%d %d\n",sum ,sum_img);
    }
}