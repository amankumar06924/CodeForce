#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<string>v;
int ct = 0;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    v.push_back(s);
}
for (int i = 0; i < n; i++)
{
    if (v[i] == "Tetrahedron")
    {
        ct = ct+4;
        
    }else if (v[i]=="Cube")
    {
        ct = ct +6;
    }else if (v[i]=="Octahedron")
    {
       ct  = ct + 8;
    }else if (v[i]=="Dodecahedron")
    {
        ct = ct + 12;
    }else if (v[i]=="Icosahedron")
    {
        ct = ct + 20;
    }  
}
cout<<ct<<endl;


return 0;
}