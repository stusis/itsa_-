/*
問題描述：
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。

輸入說明：
輸入一個正整數。

輸出說明：
迴文印出 ” YES ” ；非回文印出 ” NO” 。
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char input[10];
    scanf("%s",input);
    int len = strlen(input);
    int palindrome = 0;
    for(int i=0;i<len / 2;i++){
        if(input[i] == input[len-1-i]){
            palindrome = 1;
        }
        else
            palindrome = 0;
    }
    if(palindrome == 1){
        printf("YES\n");
    }
    else if(palindrome == 0){
        printf("NO\n");
    }
}