/*
問題描述：
請撰寫一個程式，可計算兩數和的平方值。

輸入說明：
輸入兩個數字。

輸出說明：
輸出和的平方值。
*/

#include<stdio.h>

int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	printf("%d\n",(num1+num2)*(num1+num2));
} 