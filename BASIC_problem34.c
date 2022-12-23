/*
問題描述：
已知男生標準體重＝(身高－80 )*0.7；女生標準體重＝(身高－70)*0.6；試寫一個程式可以計算男生女生的標準體重。

輸入說明：
每個測資檔案會有多組測資案例。輸入兩個數值，依序代表為身高及性別（1代表男性；2代表女性）。

輸出說明：
輸出標準體重，浮點數取至第一位。
*/

#include<stdio.h>

int main(){
	float height,weight;
	int gender;
	while(scanf("%f %d",&height,&gender) != EOF){
	    if(gender == 1){
	        weight = (height - 80) * 0.7;
	    }
	    else if(gender == 2){
	        weight = (height - 70) * 0.6;
	    }
	    printf("%.1f\n",weight);
	}
} 