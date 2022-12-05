#include<bits//stdc++.h>

using namespace std;

vector<pair<int,int>> v[102];
vector<int> pai[102];
bool vis[102];
int h=0,ah=0,aux,b;

int findPai(int a){
    for(int i=0;i<pai[a].size();i++){
        if(vis[pai[a][i]]==false){
            return pai[a][i];
        }
    }
    return -1;
}

void solve(int a){
    vis[a]=true;
    if(v[a].size()==0){
        aux=findPai(a);
        if(aux!=-1){
            for(int i=0; i<v[aux].size();i++){
                if(v[aux][i].first==a){
                    h+=v[aux][i].second;
                }
            }
            if(vis[aux]==false){
                solve(aux);
            }
        }
        else{
            for(int i=0;i<v[b].size();i++){
                if(v[b][i].first==a){
                    h+=v[b][i].second;
                }
            }
        }
    }
    else if(v[a].size()==1){
        if(vis[v[a][0].first]==false){
            ah+=v[a][0].second;
            solve(v[a][0].first);
        }
        else{
            aux=findPai(a);
            if(aux!=-1){
                for(int i=0;i<v[aux].size();i++){
                    if(v[aux][i].first==a){
                        h+=v[aux][i].second;
                    }
                }
                if(vis[aux]==false){
                    solve(aux);
                }
            }
            else{
                for(int i=0;i<v[b].size();i++){
                    if(v[b][i].first==a){
                        h+=v[b][i].second;
                    }
                }
            }
        }
    }
    else{
        for(int i=0;i<v[a].size();i++){
            if(vis[v[a][i].first]==false){
                ah+=v[a][i].second;
                solve(v[a][i].first);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        pai[b].push_back(a);
        vis[a]=vis[b]=false;
    }
    for(int i=1;i<=n;i++){
        if(v[i].size()==2){
            b=i;
            solve(i);
            x=min(ah,h);
            break;
        }
    }
    cout<<x<<"\n";
    return 0;
}