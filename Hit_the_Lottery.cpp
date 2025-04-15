#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ct = 0;
    while (n!=0)
    {
        if (n>=100)
        {
            n = n-100;
            ct++;
        }else if(n>=20 && n<100){
            n = n-20;
            ct++;
        }else  if(n>=10 &&n<20){
            n = n-10;
            ct++;
        }else if(n>=5 && n<10){
            n=n-5;
            ct++;
        }else if(n>=1 &&n<5){
            n = n-1;
            ct++;
        }
    }
    cout<<ct<<endl;
    
return 0;
}