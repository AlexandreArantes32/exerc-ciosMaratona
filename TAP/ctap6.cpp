#include<bits/stdc++.h>

using namespace std;

struct node{
    int prox[26],key;
    bool end;
    node(){
        end=false;
        for(int i=0;i<26;i++){
            prox[i]=0;
        }
        key=0;
    }
};
const int N=25*1e4 + 10;
int idx=0,pos=0;
struct node n[N];
string chave[N];
queue<int>y;

void insertTrie(string s){
    int atual=0;
    for(char ch:s){
        if(n[atual].prox[ch-'a']==0){
            n[atual].prox[ch-'a']=++idx;
        }
        atual=n[atual].prox[ch-'a'];
    }
    if(n[atual].key==0){
        ++pos;
        chave[pos]=s;
        n[atual].key=pos;
    }
    n[atual].end=true;
}

void dfs(int a){
    if(n[a].end==true){
        y.push(n[a].key);        
    }
    for(int i=0;i<26;i++){  
        if(n[a].prox[i]!=0){
            dfs(n[a].prox[i]);
        }
    }
}

bool findTrie(string s){
    int atual=0;
    for(char ch:s){
        if(n[atual].prox[ch-'a']==0){
            return false;
        }
        atual=n[atual].prox[ch-'a'];
    }
    for(int i=0;i<26;i++){  
        if(n[atual].prox[i]!=0){
            dfs(n[atual].prox[i]);
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,cont;
    string s;
    cin>>x;
    while(x--){
        cin>>s;
        insertTrie(s);
    }
    cin>>x;
    cont=0;
    for(int i=1;i<=x;i++){
        cin>>s;
        cont++;
        cout<<"Case #"<<cont<<":\n";
        if(findTrie(s)){
            while(y.size()!=0){
                cout<<chave[y.front()]<<"\n";
                y.pop();
            }
        }
        else{
            cout<<"No match.\n";
        }
    }
    return 0;
}