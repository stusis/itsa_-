/*
問題描述：

給定下列遞迴函式 :

請計算出 f (k) 。

輸入說明：

輸入值為一個大於 1 的整數。

輸出說明：

f(k) 的計算結果。
*/


#include <stdio.h>

int function(int input){
	if(input == 0 || input == 1){
		input = input + 1;
		return input;
	}
	else if(input > 1){
		return (function(input - 1) + function(input / 2));
	}
}

int main(){
	int input;
	scanf("%d",&input);
	printf("%d\n",function(input));
} 