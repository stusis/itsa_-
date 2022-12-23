/*
問題描述：
請撰寫一個程式，其可計算正方形面積。

輸入說明 ：
輸入一個大於零的數字(double)為正方形之邊長。

輸出說明 ：
輸出正方形面積(double)，四捨五入取到小數點以下第一位。
*/

#include<stdio.h>

int main(){
	double input;
	double area;
	scanf("%lf",&input);
	area = input * input;
	area = (area*10+0.5) / 10.0;  //做四捨五入要保留n位的小數點，就乘10的n次方+0.5再除100
	printf("%.1lf\n",area);
} 