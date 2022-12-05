#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    bool b=false;
    string s;
    char c;
    cin>>t;
    while(t--){
        cin>>s>>c;
        for(int i=0;i<s.size();i++){
            if(s[i]==c && (i&1)==0){
                b=true;
            }
        }
        if(b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        b=false;
    }
    return 0;
}