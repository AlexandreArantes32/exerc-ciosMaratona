#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
vector<int> v[202];
vector<bool> vis[202];
vector<pii> mov = {{0,1},{0,-1},{1,0},{-1,0}};
int h,l;

int bfs(int a,int b,int c){
    queue<pii> q;
    pii p;
    vis[a][b]=true;
    int d,e,aux2=1;
    q.push(make_pair(a,b));
    while(q.size()!=0){
        p.first=q.front().first;
        p.second=q.front().second;
        q.pop();
        for(auto aux:mov){
            d=p.first + aux.first;
            e=p.second + aux.second;
            if(d>=0 && d<h && e>=0 && e<l){
                if(v[d][e]==c && vis[d][e]==false){
                    vis[d][e]=true;
                    aux2++;
                    q.push(make_pair(d,e));
                }
            }  
        }
    }
    return aux2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h>>l;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
            vis[i].push_back(false);
        }
    }
    int mini= INT32_MAX;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            if(vis[i][j]==false){
                mini=min(bfs(i,j,v[i][j]),mini);
            }
        }
    }
    cout<<mini<<"\n";

    return 0;
}