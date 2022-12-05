#include <bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>k;
    int aux=n-k+1;
    int resp[aux],cont=1;
    pair<int,int>p;
    p.first=p.second=0;
    for(int i=0;i<k;i++){
        if(v[i]>=p.first){
            p.first=v[i];
            p.second=i;
        }
    }
    resp[0]=p.first;
    for(int i=k;i<n;i++){
        if(v[i]>=p.first){
            p.first=v[i];
            p.second=i;
        }
        else if(p.second<cont){
            p.first=0;
            for(int j=cont;j<(cont+k);j++){
                if(v[j]>=p.first){
                    p.first=v[j];
                    p.second=j;
                }
            }
        }
        resp[cont]=p.first;
        cont++;
    }
    for(int i=0;i<aux;i++){
        cout<<resp[i]<<" ";
    }
    cout<<"\n";
    return 0;
}