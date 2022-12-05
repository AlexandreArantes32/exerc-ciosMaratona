#include<bits//stdc++.h>

using namespace std;

const int N=1e6+6;
struct node{
    bool end;
    int qtd=0;
    int prox[26];//alfabeto
    node(){
        end=false;
        for(int i=0;i<26;i++){
            prox[i]=0;
        }
    }
};

struct node nodes[N];
int idx=0;
void insertTrie(string s){
    int curr=0;
    for(char ch:s){
        if(nodes[curr].prox[ch-'a']==0){
            nodes[curr].prox[ch-'a']=++idx;
        }
        curr=nodes[curr].prox[ch-'a'];
        nodes[curr].qtd=nodes[curr].qtd + 1;
    }
    nodes[curr].end=true;
}

int findTrie(string s){
    int curr=0;
    for(char ch:s){
        if(nodes[curr].prox[ch-'a']==0){
            return 0;
        }
        curr=nodes[curr].prox[ch-'a'];
    }
    return nodes[curr].qtd;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    string s;
    while(n--){
        cin>>s;
        insertTrie(s);
    }
    while(q--){
        cin>>s;
        cout<<findTrie(s)<<"\n";
    }
    return 0;
}