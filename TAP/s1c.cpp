#include<bits//stdc++.h>

using namespace std;
vector<int> v[26];
string s;
vector<int> caminho;
int custo,pivo;
bool ordem;

void solve(char c){
    for(int i=0;i<v[c-'a'].size();i++){
        caminho.push_back(v[c-'a'][i]);
    }
    v[c-'a'].clear();
    
    if(s[s.size()-1]!=c){
        if(ordem){
            pivo = c-'a' +1;
            while(pivo<26){
                if(v[pivo].size()!=0){
                    break;
                }
                pivo++;
            }
            custo+= pivo-c+'a';
            solve(pivo + 'a');
        }
        else{
            pivo = c - 'a' -1;
            while(pivo>=0){
                if(v[pivo].size()!=0){
                    break;
                }
                pivo--;
            }
            custo += c - pivo -'a';
            solve(pivo+'a');
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    cin>>t;
    while(t--){
        custo=0;
        cin>>s; 
        for(int i=0;i<s.size();i++){
            v[s[i]-'a'].push_back(i+1);
        }
        if(s[0]<=s[s.size()-1]){
            ordem =true;
        }
        else{
            ordem =false;
        }
        solve(s[0]);
        for(int i=0;i<26;i++){
            v[i].clear();
        }
        cout<<custo<<" "<<caminho.size()<<"\n";   
        for(int i=0; i<caminho.size() ;i++){
            cout<<caminho[i]<<" ";
        }
        cout<<"\n";
        caminho.clear();
    }
    return 0;
}