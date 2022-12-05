#include <bits/stdc++.h>

using namespace std;
const int N=1e6+3;

struct trie{
    int x[26],key,qtd,pr;
    bool fim;
    trie(){
        for(int i=0;i<26;i++){
            x[i]=0;
        }
        key=qtd=0;
        fim=false;
    }
};
int pos,chave;
struct trie v[N];
string pl[N];

void inserir(string s){
    int atual=0;
    for(int i=0;i<s.size();i++){
        if(v[atual].x[s[i]-'a']==0){
            v[atual].x[s[i]-'a']=++pos;
            
        }
        atual=v[atual].x[s[i]-'a'];
        if(v[atual].key==0){
            v[atual].key=chave;//aumenta na leitura da string
        }
    }
    v[atual].fim=true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}