#include <bits//stdc++.h>

using namespace std;

long long total=0;
vector<int> v;
int fim;

void solve(int ini , int d){
    long long aux=0;
    while(fim!=v.size()){
        if((v[fim]-v[ini])<=d){
            aux=fim;
            fim++;
        }
        else{
            break;
        }
    }
    if(aux!=0){
        fim=aux;
    }
    else if(fim==(v.size()-1)){
        fim--;
    }
    aux=aux-ini;
    if(aux>0){
        total+=(aux*(aux-1))/2;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    fim=2;
    for(int i=0;i<(n-2);i++){
        solve(i,d);
    }
    cout<<total<<"\n";
    return 0;
}