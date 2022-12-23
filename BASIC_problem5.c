/*
問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

輸入說明：
輸入一個整數，介於-128～127之間。

輸出說明：
以8位元的二進制顯示。
*/

#include<stdio.h>

int main()
{
    int input;
    int binary[8];
    scanf("%d",&input);
    
    if(input < -128 || input > 127){          //判斷是否超出範圍
        printf("Error input!\n");
    }
    else{
        if(input < 0){                        //若是負數，則+256
            input = input + 256;
        }
        for(int i=0;i<8;i++){
			int tmp = input % 2;
			binary[i] = tmp;
			input = input / 2;
		}
    }
    
    for(int i=7;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf("\n");
}