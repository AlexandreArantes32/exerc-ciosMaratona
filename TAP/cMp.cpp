#include <bits//stdc++.h>

using namespace std;
int  n,m,k,resp;
int solve(int x,int y){
    int aux=x^y,qtd;
    qtd=0;
    for(int i=31;i>=0;i--){
        if(aux&(1<<i)){
            qtd++;
        }
    }
    if(qtd<=k){
        return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v;
    cin>>n>>m>>k;
    for(int i=0;i<=m;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    resp=0;
    for(int i=0;i<m;i++){
        resp+=solve(v[v.size()-1],v[i]);
    }
    cout<<resp<<"\n";
    return 0;
}