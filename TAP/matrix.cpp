#include <bits//stdc++.h>

using namespace std;

const int N=105;
//vector<int> v[N];
int score=0,mudou=0;
void solve(int a,int k){
    int v[N][N;];
    int fim,aux,qtd;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int a;
            cin>>a;
            if(a==1){
                v[j].push_back(i);
            }
        }
    }
    for(int i=1;i<=m;i++){
        solve(i,k);
    }

}
for(int i=0;i<v[a].size();i++){
        aux=min(v[a][i],k)+a;
        int j=v[a][i+1];
        int f;
        while(v[a][j]<=aux){
            if(v[a][j]<=aux){
                f++;
            }
            j++;
        }
        mdp=max(f,mdp);
    }