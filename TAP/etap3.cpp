#include<bits//stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,v[85];
    long long total=0;
    cin>>t;
    v[67]=v[68]=v[73]=v[79]=v[84]=0;
    while(t--){
        string s;
        char c;
        cin>>s;
        c=s[0];
        v[c]++;
    }
    total= 6*v[67] + 12*v[68] + 20*v[73] + 8*v[79] + 4*v[84];
    cout<<total<<"\n";
    return 0;
}