#include <bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        long long resp=0;
        string s;
        cin>>a>>b;
        cin>>s;
        a=s.size()-1;
        if(s[a]=='0'){
            for(int i=(a-1);i>0;i--){
                if(s[i]&1){
                    if((a-i)<=b){
                        s[a]='1';
                        s[i]='0';
                        b=b-(a-i);
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        if(b>0 && s[0]=='0'){
            for(int i=1;i<(a-1);i++){
                if(s[i]&1){
                    if(i<=b){
                        s[0]='1';
                        s[i]='0';
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        for(int i=0;i<a;i++){
            int aux=s[i]+s[i+1];
            if(aux&1){
                if(s[i]&1){
                    resp+=10;
                }
                else{
                    resp+=1;
                }
            }
            else if(s[i]&1){
                resp+=11;
            }
        }
        cout<<resp<<"\n";
    }
    return 0;
}