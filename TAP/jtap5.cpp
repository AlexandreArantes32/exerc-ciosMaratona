#include<bits//stdc++.h>

using namespace std;
const int N=4*1e3+2;
vector<int> v[N];
vector<pair<int,int>> p;
string s;
long long total;

void bfs(){
    queue<int> q;
    stack<pair<int,int>> st;
    int aux,x;
    q.push(1);
    while(q.size()!=0){
        aux=q.front();
        q.pop();
        if(s[aux-1]=='B'){
            p[aux].first++;
        }
        else{
            p[aux].second++;
        }
        for(int i=0;i<v[aux].size();i++){
            x=v[aux][i];
            q.push(x);
            st.push(make_pair(x,aux));    
        }
    }
    while(st.size()!=0){
        aux=st.top().first;
        x=st.top().second;
        st.pop();
        p[x].first+=p[aux].first;
        p[x].second+=p[aux].second;
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
        total=0;
        p.clear();
        p.push_back(make_pair(0,0)); //crio 0 e 1 para não ter problemas com a indexação
        p.push_back(make_pair(0,0));
        for(int i=1;i<=n;i++){
            v[i].clear();
        }
        for(int i=2;i<=n;i++){
            int a;
            cin>>a;
            v[a].push_back(i);
            p.push_back(make_pair(0,0));
        }
        cin>>s;
        bfs();
        for(int i=1;i<p.size();i++){
            if(p[i].first==p[i].second){
                total++;
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}