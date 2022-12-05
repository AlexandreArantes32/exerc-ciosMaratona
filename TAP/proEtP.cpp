#include <bits//stdc++.h>

using namespace std;
vector<int> v;
int qtd=-1,pos=0;
vector<pair<int,int>> x;
int ve[200000];

void busca(int a,int b){
    while(v[pos]<=a && pos!=v.size()){
        pos++;
    }
    ve[x[b].second]=pos;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        x.push_back(make_pair(a,i));
    }
    sort(x.begin(),x.end());
    for(int i=0;i<m;i++){
        busca(x[i].first,i);
    }
    for(int i=0;i<m;i++){
        cout<<ve[i]<<" ";
    }
    cout<<"\n";
    return 0;
}