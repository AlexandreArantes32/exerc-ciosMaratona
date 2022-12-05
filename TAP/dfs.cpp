#include <bits//stdc++.h>

using namespace std;

const int N=1e6+2;
vector<int> v[N];
int visitado[N];

void dfs(int a){
    for(int i=0;i<v[a].size();i++){
        int aux2=v[a][i];
        if(visitado[aux2]==-1){
            visitado[aux2]=0;
            dfs(aux2);
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    memset(visitado,-1,sizeof(visitado));
    int n,m,resp;
    resp=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(visitado[i]==-1){
            dfs(i);
            resp++;
        }
    }
    cout<<resp<<"\n";
    return 0;
}