#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,a;
    set<int> s;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            s.insert(a);
        }
        if(s.size()==n){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        s.clear();
    }
    return 0;
}