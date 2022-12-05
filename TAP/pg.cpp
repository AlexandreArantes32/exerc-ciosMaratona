#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,v;
    cin>>t;
    v=0;
    while(t--){
        int b;
        cin>>b;
        if(b!=1){
            v++;
        }
    }
    cout<<v<<"\n";
    return 0;
}