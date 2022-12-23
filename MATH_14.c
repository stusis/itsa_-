/*
問題描述：
寫一程式要求使用者輸入代表秒數的整數值，並且經計算以天數、小時數、分鐘數、與秒數的組合來顯示對等的時間值。請使用符號常數表示一天內的小時數；一小時內的分鐘數，以及一分鐘內的秒數。

輸入說明：
輸入秒數。

輸出說明：
輸出天數，時數，分數，秒數。

*/

#include<stdio.h>

int main(){
    int input;
	scanf("%d",&input);
	int days,hours,minutes,seconds;
	days = input / 86400;
	hours = (input - days*86400) / 3600;
	minutes = (input - days*86400 - hours*3600) / 60;
	seconds = (input - days*86400 - hours*3600 - minutes * 60);
	printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,minutes,seconds);
} 