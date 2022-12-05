#include <bits//stdc++.h>

using namespace std;
long long  n,m,k,resp;

int solve(int x){
    int par=0,impar=0;
    for(int i=63;i>=0;i--){
        if(x&(1<<i) && i&1){
            impar++;
        }
        else if(x&(1<<i)){
            par++;
        }
    }
    if(abs(impar-par)==k){
        return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        resp=0;
        for(int i=n;i<=m;i++){
            resp+=solve(i);
        }
        cout<<resp<<"\n";
    }
    return 0;
}