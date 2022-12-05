#include<bits//stdc++.h>

typedef long long ll;
using namespace std;

int ini;
vector<int> v;

long long atualizaIni(int a, long long aux){
    for(int i=ini;i<v.size();i++){
        aux-=v[i];
        if(aux<=a){
            ini=i+1;
            return aux;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ini=0;
    ll m,soma,aux;
    soma=aux=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        aux+=v[i];
        if(aux>m){
            aux=atualizaIni(m,aux);
            soma=max(soma,aux);
        }
        else{
            soma=max(soma,aux);
        }
    }
    cout<<soma<<"\n";
    return 0;
}