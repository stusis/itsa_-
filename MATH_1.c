/*
問題描述：
請計算下面梯形面積，並輸出面積結果。
※ 梯形面積公式為：（上底 + 下底） × 高 ÷ 2 。

輸入說明 ：
每一組依序分別輸入梯形的上底、下底及高的整數。

輸出說明 ：
輸出梯形面積。
*/

#include<stdio.h>

int main(){
	int up,under,height;
	double area;
	scanf("%d %d %d",&up,&under,&height);
	area = ((up + under) * height) / 2.0;      //題目的範例輸出看起來要到小數點第一位
	printf("Trapezoid area:%.1f\n",area);
} 