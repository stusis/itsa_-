/*
問題描述：
請撰寫一個程式，輸入一個整數，計算平方值與立方值。

輸入說明：
輸入一個整數。

輸出說明：
輸出平方值與立方值。
*/

#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	printf("%d %d %d\n",input, input*input, input*input*input);
} 