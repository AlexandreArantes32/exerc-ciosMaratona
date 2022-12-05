#include<bits//stdc++.h>

using namespace std;

int par,imp,op;
queue<int> q;

void solve(){
    int tam,cont=0,a=1,aux,aux2;
    tam=q.size();
    while(par!=imp){
        if(cont==tam){
            a++;
            cont=0;
            tam=q.size();
        }
        aux2=aux=q.front();
        q.pop();
        aux=aux>>a;
        if(aux&1){
            op+=a;
            par--;
            imp++;
        }
        else{
            q.push(aux2);
        }
        cont++;
    }
    while(q.size()!=0){
        q.pop();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    par=imp=op=0;
    cin>>t;
    while(t--){
        cin>>n;
        n=2*n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a&1){
                imp++;
            }
            else{
                q.push(a);
                par++;
            }
        }
        if(imp==par){
            cout<<"0\n";
        }
        else if(imp>par){
            cout<<(imp-par)/2<<"\n";
        }
        else{
            solve();
            cout<<op<<"\n";
        }
        par=imp=op=0;
    }
    return 0;
}