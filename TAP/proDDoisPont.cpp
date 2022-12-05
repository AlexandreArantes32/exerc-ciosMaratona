#include<bits//stdc++.h>

using namespace std;
int n,m,k,total,mudar;
vector<pair<int,int>>v[101];

void solve(int a){
    int aux,podeAndar,tot,andou,p,auxm;
    aux=podeAndar=tot=andou=p=auxm=0;
    int fim=1;
    for(int i=0;i<v[a].size();i++){
        aux=v[a][i].first;
        podeAndar=v[a][i].second-1;
        andou=v[a][fim].first-aux;
        while(andou<podeAndar && fim!=v[a].size()){
            andou=v[a][fim].first-aux;
            fim++;
        }
        if(fim==v[a].size()){
            fim--;
        }
        if(podeAndar==0){
            p=max(p,1);
        }
        else if(podeAndar==andou){
            tot=fim-i+1;
            if(tot>p){
                p=tot;
                auxm=i;
            }
        }
        else if(andou>podeAndar){
            tot=fim-i;
            if(tot>p){
                p=tot;
                auxm=i;
            }
        }
        cout<<"tot: "<<tot<<" auxm: "<<auxm<<" podeandar: "<<podeAndar<<" andou: "<<andou<<" i: "<<i<<" a: "<<a<<" fim "<<fim<<"\n";
    }
    mudar+=auxm;
    total+=p;    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    total=mudar=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int c;
            cin>>c;
            if(c==1){
                int mini;
                mini=min(k,n-i);
                v[j].push_back(make_pair(i,mini));
            }
        }
    }
    for(int j=0;j<m;j++){
        solve(j);
    }
    cout<<total<<" "<<mudar;
    return 0;
}