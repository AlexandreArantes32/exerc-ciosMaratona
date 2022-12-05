#include<bits//stdc++.h>

using namespace std;
const int N=1e5+2;
queue<int> q;
int c[N];
vector<int> v[N];
pair<int,int>p;
void bfs(int x){
    p.first=p.second=-1;
    c[x]=0;
    q.push(x);
    while(q.size()!=0){
        int a = q.front();
        q.pop();
        for(int i=0;i<v[a].size();i++){
            if(c[v[a][i]]==-1){
                c[v[a][i]]=c[a]+1;
                if(c[v[a][i]]>p.first){
                    p.first=c[v[a][i]];
                    p.second=v[a][i];
                }
                q.push(v[a][i]);
            }    
        }    
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            v[i].clear();
        }
        for(int i=0;i<(n-1);i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            c[a]=c[b]=-1;
        }
        bfs(0);
        for(int i=0;i<n;i++){
            c[i]=-1;
        }
        bfs(p.second);
        p.first=(p.first+1)/2;
        cout<<p.first<<"\n";
    }
    /*
    1
23
1 2
2 0
0 3
0 5
0 4
4 6
4 7
7 15
15 16
16 17
17 18
18 19
19 20
20 21
21 22
7 8
8 9
9 10
9 11
11 12
11 13
13 14
*/
    return 0;
}