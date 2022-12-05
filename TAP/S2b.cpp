#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    string s;
    vector<char> pl;
    cin>>t;
    while(t--){
        cin>>a>>s;
        for(int i=(a-1);i>=0;i--){
            if(s[i]=='0'){
                b= s[i-1] - 48 + 10*(s[i-2]-48);
                pl.push_back( b + 96 );
                i=i-2;
                //cout<<b<<" b\n"
            }
            else{
                pl.push_back( s[i] + 48);
            }
        }
        for(int i = (pl.size() -1); i>=0; i--){
            cout<<pl[i];
        } 
        cout<<"\n";
        pl.clear();      
    }
    return 0;
}