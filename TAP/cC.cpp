#include <bits//stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,v[2];
    cin>>t;
    while(t--){
        bool b=true;
        int n;
        cin>>n;
        for(int i=0;i<2;i++){
            int a;
            cin>>a;
            v[i]=a;
        }
        int s=0;
        for(int i=2;i<n;i++){
            int a;
            cin>>a;
            if((v[s]&1) != (a&1)){
                b=false;
            }
            s=1-s;
        }
        if(b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }        
    }
    return 0;
}