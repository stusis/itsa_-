/*
問題描述：
請計算下面三角形面積，並輸出面積結果。
※三角形面積公式為：底 × 高 ÷ 2。

輸入說明 ：
每一組需輸入兩正整數，分別代表三角形的底及高。

輸出說明 ：
輸出三角形面積。
*/

#include<stdio.h>

int main(){
	int under,height;
	double area;
	scanf("%d %d",&under,&height);
	area = (under * height) / 2.0;
	printf("%.1f\n",area);
} 