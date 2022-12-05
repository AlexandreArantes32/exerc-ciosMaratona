#include<bits/stdc++.h>

using namespace std;

long long v[35];

void div(){
    v[0]=1;
    for(int i=1;i<33;i++){
        v[i]=2*v[i-1];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    div();
    int n,k,aux;
    long long pos=0;
    vector<int>pot;
    cin>>n>>k;
    for(int i=0;i<32;i++){
        if(n&(1<<i)){
            pos+=v[i];
            pot.push_back(v[i]);
        }
    }
    if(pot.size()>k || k>pos){
        cout<<"NO\n";
    }
    else{
        for(int i=0;pot.size()!=k;i++){
            if(pot[i]!=1){
                aux=pot[i]/2;
                pot[i]=aux;
                pot.push_back(aux);
                i--;
            }
        }
        cout<<"YES\n";
        for(int i=0;i<pot.size();i++){
            cout<<pot[i]<<" ";
        }
        cout<<"\n";        
    }
    return 0;
}