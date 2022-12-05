#include<bits//stdc++.h>

using namespace std;

vector<char> c[102];
vector<bool> vis[102];
vector<pair<int,int>> mov={{0,1},{0,-1},{1,0},{-1,0}};
int pi,pj,l,co;

void caminha(int a, int b){
    int d,e;
    vis[a][b]=true;
    pi=a;
    pj=b;
    for(auto aux:mov){
        d = a+aux.first;
        e = b+aux.second;
        if(d>=0 && d<l && e>=0 && e<co){
            if(c[d][e]=='H' && vis[d][e]==false){
                caminha(d,e);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int y,x;
    cin>>l>>co;
    for(int i=0;i<l;i++){
        for(int j=0;j<co;j++){
            char n;
            cin>>n;
            c[i].push_back(n);
            vis[i].push_back(false);
            if(n =='o'){
                x=i;
                y=j;
            }
        }
    }
    caminha(x,y);
    cout<<(pi+1)<<" "<<(pj +1)<<"\n";
    return 0;
}