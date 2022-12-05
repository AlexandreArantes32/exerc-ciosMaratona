#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v[n+2];
        int seq[n+2];
        //memset(seq,-1,sizeof(seq));
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            seq[a]=seq[b]=-1;
        }
        int maior=1;
        for(int i=1;i<=n;i++){
            if(seq[i]==-1){
                queue<int> q;
                q.push(i);
                seq[i]=1;
                int qtd=1;
                while(q.size()!=0){
                    int a;
                    a=q.front();
                    q.pop();
                    for(int j=0;j<v[a].size();j++){
                        if(seq[v[a][j]]==-1){
                            seq[v[a][j]]=1;
                            q.push(v[a][j]);
                            qtd++;
                            maior=max(maior,qtd);
                        }
                    }
                }
            }
        }
        cout<<maior<<"\n";
    }
    return 0;
}