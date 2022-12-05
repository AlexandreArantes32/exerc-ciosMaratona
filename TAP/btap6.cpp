#include<bits/stdc++.h>

using namespace std;

struct node{
    int prox[26],qtd,key,comumKey,comumQtd;
    bool end;
    node(){
        end=false;
        for(int i=0;i<26;i++){
            prox[i]=0;
        }
        comumKey=comumQtd=key=qtd=0;
    }
};
const int N=5*1e6+2;
int idx=0,pos=0;
struct node n[N];
string chave[N];

void insertTrie(string s){
    stack<int> pilha;
    int atual=0;
    for(char ch:s){
        if(n[atual].prox[ch-'a']==0){
            n[atual].prox[ch-'a']=++idx;
        }
        atual=n[atual].prox[ch-'a'];
        pilha.push(atual);
    }
    if(n[atual].end==false){
        ++pos;
        chave[pos]=s;
        n[atual].key=pos;
        n[atual].end=true;
    }
    n[atual].qtd++;
    int aux;
    while(pilha.size()!=0){
        aux=pilha.top();
        pilha.pop();
        if(n[atual].qtd>n[aux].comumQtd){
            n[aux].comumQtd=n[atual].qtd;
            n[aux].comumKey=n[atual].key;
        }
        //pq a questão
        else if(n[atual].qtd==n[aux].comumQtd){
            bool troca=false;
            string z=chave[n[aux].comumKey];
            for(int i=0;i<s.size() && i<z.size();i++){
                if(s[i]<z[i]){
                    n[aux].comumQtd=n[atual].qtd;
                    n[aux].comumKey=n[atual].key;
                    troca=true;
                    break;
                }
                else if(z[i]<s[i]){
                    troca=true;
                    break;
                }
            }
            if(troca==false){
                if(s.size()<z.size()){
                    n[aux].comumQtd=n[atual].qtd;
                    n[aux].comumKey=n[atual].key;
                }
            }
        }
        else{
            break;
        }
    }
}


pair<int,int> findTrie(string s){
    int atual=0;
    pair<int,int> p;
    for(char ch:s){
        if(n[atual].prox[ch-'a']==0){
            p.second=-1;
            return p;
        }
        atual=n[atual].prox[ch-'a'];
    }
    p.first=n[atual].comumQtd;
    p.second=n[atual].comumKey;
    return p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    pair<int,int>y;
    string s;
    cin>>x;
    while(x--){
        cin>>s;
        insertTrie(s);
    }
    cin>>x;
    while(x--){
        cin>>s;
        y=findTrie(s);
        if(y.second!=-1){
            cout<<chave[y.second]<<" "<<y.first<<" \n";
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}