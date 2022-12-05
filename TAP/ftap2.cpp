#include <bits//stdc++.h>

using namespace std;
vector<pair<int,int>> v,r;

int bbP(int a ){
    int ini=0, fim=v.size(), meio; 
    while(ini<=fim){
        meio=(ini+fim)/2; 
        if(v[meio].first==a){
            return meio; 
        }
        if(v[meio].first<a){
            ini=meio+1; 
        }
        else{
            fim=meio-1;
        }
    }
    return -1;
}
int bbI(int a ){
    int ini=0, fim=r.size(), meio; 
    while(ini<=fim){
        meio=(ini+fim)/2; 
        if(r[meio].first==a){
            return meio; 
        }
        if(r[meio].first<a){
            ini=meio+1; 
        }
        else{
            fim=meio-1;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int q[t];
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        r.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    sort(r.begin(),r.end());
    int aux=0,par=1,impar;
    while(par<=(t-1)){
        int busca=bbP(aux);
        q[par]= v[busca].second;
        aux=q[par];
        par+=2;
    }
    if(t&1){
        impar=t-1;
        for(int i=0;i<=r.size();i++){
            if(bbP(r[i].first)==-1){
                q[impar]=r[i].first;
                aux=q[impar];
                impar-=2;
                break;
            }
        }
    }
    else{
        aux=0;
        impar=t-2;
    }
    while(impar>=0){
        int busca=bbI(aux);
        q[impar] = r[busca].second;
        aux=q[impar];
        impar-=2;
    }
    for(int i=0;i<t;i++){
        cout<<q[i]<<" ";
    }
    cout<<"\n";
    return 0;
}