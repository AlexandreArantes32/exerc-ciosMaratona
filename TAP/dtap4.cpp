#include<bits//stdc++.h>

using namespace std;

vector<char> v[1002];
queue<pair<int,int>> q;
pair<int,int> p;
int mov=0;

void solve(int h , int w){
    int aux[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    bool troca=false;
    p.first=q.back().first;
    p.second=q.back().second;
    while(q.size()!=0){
        int a,b;
        a=q.front().first;
        b=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int c,d;
            c=a+aux[i][0];
            d=b+aux[i][1];
            if(c>=0 && c<h && d>=0 && d<w){
                if(v[c][d]=='.'){
                    q.push(make_pair(c,d));
                    v[c][d]='#';
                    troca=true;
                }
            }
        }
        if(a==p.first && b==p.second && troca){
            mov++;
            p.first=q.back().first;
            p.second=q.back().second;
            troca=false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h,w;    
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char c;
            cin>>c;
            v[i].push_back(c);
            if(c=='#'){
                q.push(make_pair(i,j));
            }
        }
    }
    solve(h,w);
    cout<<mov<<"\n";
    return 0;
}