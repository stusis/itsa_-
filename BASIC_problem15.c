/*
問題描述 ：

在電腦科學上 ，計算一串文字上各個字母出現的頻率是常被用到的技術，這對壓縮來講是很重要的資訊，而計算字數也可以幫助人們作校正的工具。一行文字被空白、逗點或是句點所分隔而形成很多字，例如 ”I have a pencil.” 這行字就有 I ， have ， a ， pencil 這四個字，即此行字數為 4 。所以現在要請你幫忙設計一個程式來計算一行文字的字 數及各個字母出現的次數。

輸入說明 ：

輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 。

輸出說明 ：

第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int ch;
    int space = 1;                          //算有幾個word
    int alphaCnt[26] = {0};
    int idx = 0;
    while((ch = getchar()) != EOF){         //一個字元一個字元讀入做處理
        if(ch == ' '){
            space++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            idx = ch - 'a';
            alphaCnt[idx] += 1;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            idx = ch - 'A';
            alphaCnt[idx] += 1;
        }
    }
    printf("%d\n",space);
    for(int i=0;i<26;i++){
        if(alphaCnt[i] > 0){
            printf("%c : %d\n",i+'a',alphaCnt[i]);
        }
    }
}