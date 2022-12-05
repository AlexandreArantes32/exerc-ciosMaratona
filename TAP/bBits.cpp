#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,v[32],a,aux;
    cin>>t;
    while(t--){
        cin>>n;
        aux=0;
        for(int i=0;i<32;i++){
            v[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>a;
            for(int i=0;i<32;i++){
                if(a&(1<<i)){
                    v[i]++;
                }
            }
        }
        for(int i=0;i<32;i++){
            if(v[i]==n){
                aux+=(1<<i);
            }
        }
        cout<<aux<<"\n";

    }

    return 0;
}