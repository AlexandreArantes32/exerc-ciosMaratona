#include<bits//stdc++.h>

using namespace std;
vector<char> c[102];
vector<int> vis[102];
vector<pair<int,int>> mov = {{1,1},{-1,-1},{1,-1},{-1,1},{0,1},{0,-1},{1,0},{-1,0}};
int dist,n,m;

void dfs(){
    //
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            c[i].clear();
            vis[i].clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char aux;
                cin>>aux;
                c[i].push_back(aux);
                vis[i].push_back(-1);
            }
        }
    }
}