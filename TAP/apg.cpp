#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // o digito for maior que o anterior apgo o anterior
    int n,d,apg;
    stack<char> s;
    string aux;
    char c;
    while(cin>>n>>d && (n+d)){
        apg=d;
        aux="";
        for(int i=0;i<n;i++){
            cin>>c;    
            while(s.size() && s.top()<c && apg){
                s.pop();
                apg--;
            }
            if(s.size() < (n-d)){
                s.push(c);
            }
        }
        while(s.size()){
            aux+=s.top();
            s.pop();
        }
        for(int i=aux.size()-1;i>=0;i--){
            cout<<aux[i];
        }
        cout<<"\n";
    }
    
    return 0;
}