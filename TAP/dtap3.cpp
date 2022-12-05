#include<bits//stdc++.h>

using namespace std;
int v[302][27];
char c[302][302];
bool verifica(int n){
    char aux=c[0][0];
    for(int i=1;i<n;i++){
        if(c[i][i]!=aux){
            return false;
        }
    }
    aux=c[0][n-1];
    for(int i=0;i<n;i++){
        if(c[i][n-i-1]!=aux){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<char> s;
    int n,a,b;
    a=b=-1;
    cin>>n;
    memset(v,0,sizeof(v));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char d;
            cin>>d;
            c[i][j]=d;
            s.insert(d);
            v[i][d-97]++;
        }
    }
    if(s.size()>2){
        cout<<"NO\n";
    }
    else{
        if(verifica(n)==false){
            cout<<"NO\n";
            return 0;
        }
        for(int i=0;i<n;i++){
            int aux=c[i][i]-97;
            if(v[i][aux]>2 && i!=(n/2)){
                cout<<"NO\n";
                return 0;
            }else if(i==(n/2)){
                if(v[i][aux]>1){
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
        cout<<"YES\n";
    }
    return 0;
}