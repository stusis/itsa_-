/*
問題描述 ：

請設計一程式，輸入一個陣列並且反轉後再輸出。

 

輸入說明 ：

第一行先輸入矩陣的行、列，之後再輸入陣列元素。

 

輸出說明 ：

反轉後的矩陣。
*/


#include <stdio.h>

int main(){
	int row,col;
	scanf("%d %d",&row,&col);
	int matrix[row][col];
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
	        scanf("%d",&matrix[i][j]);
	    }
	}
	for(int i=0;i<col;i++){
	    for(int j=0;j<row;j++){
	        if(j == row -1)                        //最後一個元素後面不要印空格才會對
	            printf("%d",matrix[j][i]);
	        else
	            printf("%d ",matrix[j][i]);
	    }
	    printf("\n");
	}
} 