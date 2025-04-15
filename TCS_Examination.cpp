#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int Dragon_score[3];
        int Sloth_score[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>Dragon_score[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin>>Sloth_score[i];
        }
        int total_dragon_score = accumulate(Dragon_score,Dragon_score+3,0);
        int total_sloth_score = accumulate(Sloth_score,Sloth_score+3,0);
        if (total_dragon_score>total_sloth_score)
        {
            cout<<"DRAGON"<<endl;
        }else if (total_dragon_score==total_sloth_score && Dragon_score[0]>Sloth_score[0])
        {
            cout<<"DRAGON"<<endl;
        }else if (total_dragon_score==total_sloth_score && Dragon_score[0]==Sloth_score[0] && Dragon_score[1]>Sloth_score[1])
        {
            cout<<"DRAGON"<<endl;
        }else if(total_dragon_score<total_sloth_score){
            cout<<"SLOTH"<<endl;
        }else if (total_dragon_score==total_sloth_score && Dragon_score[0]<Sloth_score[0])
        {
            cout<<"SLOTH"<<endl;
        }else if (total_dragon_score==total_sloth_score && Dragon_score[0]==Sloth_score[0] && Dragon_score[1]<Sloth_score[1])
        {
            cout<<"SLOTH"<<endl;
        }else
        {
            cout<<"TIE"<<endl;
        }   
    }
    
return 0;
}