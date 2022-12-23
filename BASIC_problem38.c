/*
問題描述 ：

輸入所使用的度數，換算夏月及非夏月之電費金額

每度（元）         夏月      非夏月

120 度以下部分     2.10      2.10

121-330 度部分     3.02      2.68

331-500 度部分     4.39      3.61

501-700 度部分     4.97      4.01

701 度以上部分     5.63     4.50

輸入說明 ：

一個度數 ( 正整數 )

輸出說明 ：

夏月與非夏月的金額，請輸出至小數點後兩位
*/

#include<stdio.h>

int main(){
	int kWh;
	float summer_cost,cost;
	scanf("%d",&kWh);
	if(kWh <= 120){
	    cost = 2.10 * kWh;
	    summer_cost = 2.10 * kWh;
	}
	else if(kWh > 120 && kWh <= 330){
	    cost = 2.68 * (kWh-120) + 120*2.10;
	    summer_cost = 3.02 * (kWh-120) + 120*2.10;
	}
	else if(kWh > 330 && kWh <= 500){
	    cost = 3.61 * (kWh-330) + 210*2.68 + 120*2.10;
	    summer_cost = 4.39 * (kWh-330) + 210*3.02 + 120*2.10;
	}
	else if(kWh > 500 && kWh <= 700){
	    cost = 4.01 * (kWh-500) + 170*3.61 + 210*2.68 + 120*2.10;
	    summer_cost = 4.97 * (kWh-500) + 170*4.39 + 210*3.02 + 120*2.10;
	}
	else if(kWh > 700){
	    cost = 4.50 * (kWh-700) + 200*4.01 + 170*3.61 + 210*2.68 + 120*2.10;
	    summer_cost = 5.63 * (kWh-700) + 200*4.97 + 170*4.39 + 210*3.02 + 120*2.10;
	}
	printf("Summer months:%.2f\nNon-Summer months:%.2f\n",summer_cost,cost);
} 