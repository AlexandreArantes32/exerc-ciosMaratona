#include<bits//stdc++.h>

using namespace std;

void placar(int se,int a,int b,int c,int d){
    if(a==2 || b==2){
        if(a==2){
            cout<<a<<" (winner) - "<<b<<"\n";
        }
        else{
            cout<<a<<" - "<<b<<" (winner)\n";
        }
    }
    else{
        if(se==0){
            cout<<a<<" ("<<c<<"*) - "<<b<<" ("<<d<<")\n";
        }
        else{
            cout<<a<<" ("<<c<<") - "<<b<<" ("<<d<<"*)\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int v[2],se,re,ab,ma,a,b;
    se=v[0]=v[1]=a=b=0;
    re=1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='S'){
            v[se]++;
        }
        else if(s[i]=='R'){
            v[re]++;
            se=1-se;
            re=1-re;
        }
        ab=abs(v[0]-v[1]);
        ma=max(v[0],v[1]);
        if(ab>=2){
            if(v[0]>=5){
                a++;
                ab=ma=se=v[0]=v[1]=0;
                re=1;
            }
            else if(v[1]>=5){
                b++;
                ab=ma=re=v[0]=v[1]=0;
                se=1;
            }
        }
        else if(ma==10){
            if(v[0]>v[1]){
                a++;
                ab=ma=se=v[0]=v[1]=0;
                re=1;
            }
            else{
                b++;
                ab=ma=re=v[0]=v[1]=0;
                se=1;
            }
        }
        if(s[i]=='Q'){
            placar(se,a,b,v[0],v[1]);
        }
    }
    return 0;
}