/*
問題描述：
請撰寫一個程式，依據代表攝氏溫度的變數ｃ的值，顯示華氏溫度(已知攝氏溫度等於華氏溫度減32度再乘上5/9)。

輸入說明：
輸入攝氏溫度(數值不一定都是整數)。

輸出說明：
輸出華氏溫度(四捨五入取至小數點第一位，整數需補零)。
*/

#include<stdio.h>

int main(){
	double temp;
	double result;
	scanf("%lf",&temp);
	result = temp * 9 / 5 + 32;
	printf("%.1lf\n",result);
} 