#include <bits//stdc++.h>

using namespace std;

const int N=1e6+2;
vector<int> v[N];
int visitado[N];

void bfs(int a){
    queue<int> f;
    int aux,aux2;
    visitado[a]=0;
    f.push(a);
    while(f.empty()==false){
        aux=f.front();
        f.pop();
        for(int i=0;i<v[aux].size();i++){
            aux2=v[aux][i];
            if(visitado[aux2]==-1){
                visitado[aux2]=0;
                f.push(aux2);
            }
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
            bfs(i);
            resp++;
        }
    }
    cout<<resp<<"\n";
    return 0;
}