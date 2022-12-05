#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,a,b,aux,x;
    cin>>t;
    while(t--){
        cin>>a>>b;
        aux=a;
        //cout<<a<<" a\n";
        for(int i=0;i<64 && a<b;i++){
            aux=a|(1<<i);
            if( aux <= b){
                a=aux;
            }
            else{
                break;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}