/*
問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。
如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。

輸入說明：
輸入一整數座標，依序分別X與Y。

輸出說明：
輸出此座標位置在圓內或圓外訊息。
*/

#include<stdio.h>

int main()
{
    int coorX,coorY;
    int dist = 0;
    scanf("%d %d",&coorX,&coorY);
    dist = (coorX-0) * (coorX-0) + (coorY - 0) * (coorY - 0);     //如果與圓心距離 > 100(半徑) 則代表outside
    if(dist > 100 * 100){
        printf("outside\n");
    }
    else if(dist > 0 && dist <= 100 * 100){
        printf("inside\n");
    }
    return 0;
}