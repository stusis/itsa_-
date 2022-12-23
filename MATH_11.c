/*
問題描述：
假設火車站的自動售票機只能接受10元、5元、以及1元的硬幣，請撰寫一個程式，算出乘客所購買票價N元車票時，所需投入各種幣值硬幣最少的數量？

輸入說明：
輸入票價。

輸出說明：
輸出各幣值硬幣最少的數量。
*/

#include<stdio.h>

int main(){
    int cost;
	scanf("%d",&cost);
	int coin_10 = 0;
	int coin_5 = 0;
	int coin_1 = 0;
	coin_10 = cost / 10;
	coin_5  = (cost - 10*coin_10) / 5;
	coin_1  = (cost - 10*coin_10 - 5*coin_5);
	printf("NT10=%d\nNT5=%d\nNT1=%d\n",coin_10,coin_5,coin_1);
} 