#include <bits//stdc++.h>

using namespace std;

long long total=0;
const int N=1e5+2;
int v[1001][N];

int ponte(int a){
    //
}

void solve(int a){
    int ladoEs,ladoDi,qtd;
    ladoEs=ladoDi=0;
    qtd=v[a][0];
    //
}

int main(){  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n; 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i][0]=a;
        for(int j=1;j<=a;j++){
            int b;
            cin>>b;
            v[i][j]=b;
        }
    }
    for(int i=0;i<n;i++){
        solve(i);
    }
    return 0;
}