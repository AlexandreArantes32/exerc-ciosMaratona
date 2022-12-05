#include<bits/stdc++.h>

using namespace std;
bool ans;
void solve( int a,string s){
    vector<char> v ={ 'Y','e', 's'};
    for(int i=0;i<s.size();i++){
        if(v[a]!=s[i]){
            ans=false;
            return;
        }
        a=(++a)%3;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;
    cin>>t;
    
    while(t--){
        cin>>s;
        ans=true;
        for(int i=0;i<1;i++){
            if(s[i]=='Y'){
                solve(0,s);
            }else if(s[i]=='e'){
                solve(1,s);
            }
            else if(s[i]=='s'){
                solve(2,s);
            }
            else{
                ans=false;
            }
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}