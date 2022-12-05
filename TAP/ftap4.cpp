#include<bits//stdc++.h>

using namespace std;
int maior=64;
vector<bool> vis[50];
vector<pair<int,int>> mov = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
vector<pair<int,int>> p;
vector<char> c[52];
int h,w;
//sensei gustavo é brabo
void dfs(int a,int b,int letra){
    maior=max(letra,maior);
    vis[a][b]=true;
    for(auto aux:mov){
        int d,e,f;
        d=a+aux.first;
        e=b+aux.second;
        if(d>=0 && d<h && e>=0 && e<w){
            f=c[d][e];
            if(f==(letra+1) && vis[d][e]==false){
                dfs(d,e,f);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int casos=1;
    while(1){
        cin>>h>>w;
        if(h==0 && w==0){
            break;
        }
        else{
            for(int i=0;i<h;i++){
                c[i].clear();
                vis[i].clear();
            }
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    char a;
                    cin>>a;
                    c[i].push_back(a);
                    vis[i].push_back(false);
                    if(a=='A'){
                        p.push_back(make_pair(i,j));
                    }
                }
            }
            for(int i=0;i<p.size();i++){
                int a=p[i].first;
                int b=p[i].second;
                dfs(a,b,65);
            }
        }
        cout<<"Case "<<casos<<": "<<maior-64<<"\n";
        casos++;
        maior=64;
        p.clear();
    }
    return 0;
}