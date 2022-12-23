/*
問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。

輸出說明：
輸出停車費。
*/

#include<stdio.h>

int main()
{
    int s_hour,s_minute,l_hour,l_minute;
    scanf("%d %d %d %d",&s_hour,&s_minute,&l_hour,&l_minute);
    
    int time = (l_hour - s_hour)*60 + (l_minute - s_minute);
    int cost = 0;
    
    if(time <= 2*60){                                           //停車2小時以內
        cost = (time / 30) * 30;
    }
    else if(time > 2*60 && time <= 4*60){                       //超過2小時，但未滿4小時的部份 + 停車2小時
        cost = ((time-120) / 30) * 40 + 30*2*2;
    }
    else if(time > 4*60){
        cost = ((time-240) / 30) * 60 + 30*2*2 + 40*2*2;        //超過4小時以上的部份 + 停車2小時 + 停車超2不超4小時
    }
    
    printf("%d\n",cost);
    return 0;
}