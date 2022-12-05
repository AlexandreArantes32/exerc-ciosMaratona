#include<bits//stdc++.h>

using namespace std;
const int N=1e5+6;
vector<int> v[N];
int cor[N],branco,preto;
long long total;
queue<int> vp;

void addArestas(){
    int aux;
    while(vp.size()!=0){
        aux=vp.front();
        vp.pop();
        if(v[aux].size()<branco){
            total+=(branco-v[aux].size());
        }
    }
}

void bfs(int a){
    int aux,aux2;
    cor[a]=1;
    queue<int> q;
    q.push(a);
    while(q.size()!=0){
        aux=q.front();
        q.pop();
        if(cor[aux]){
            preto++;
            vp.push(aux);
        }
        else{
            branco++;
        }
        for(int i=0;i<v[aux].size();i++){
            aux2=v[aux][i];
            if(cor[aux2]==-1){
                cor[aux2]=1-cor[aux];
                q.push(aux2);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    branco=preto=total=0;
    cin>>n;
    memset(cor,-1,sizeof(cor));
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    addArestas();
    cout<<total<<"\n";
    return 0;
}