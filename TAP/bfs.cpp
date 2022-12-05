#include <bits//stdc++.h>

using namespace std;

const int N=1e6;

vector<int> grafo[N];
int distancia[N];

void bfs(int x){
    queue<int> f;
    distancia[x]=0;        
    f.push(x); 
    int aux,aux2;
    while(f.empty()==false){
        aux=f.front();
        f.pop();
        for(int i=0;i<grafo[aux].size();i++){
            aux2=grafo[aux][i];      
            if(distancia[aux2]==-1){ 
                distancia[aux2]=distancia[aux]+1; 
                f.push(aux2); 
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    memset(distancia,-1,sizeof(distancia));
    int n,m;
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    cout<<"valor de origem \n";
    cin>>n;
    bfs(n);
    for(int i=0;i<10;i++){
        if(distancia[i]!=-1)
        cout<<distancia[i]<<" ";
    }
    cout<<"\n";
    return 0;
}