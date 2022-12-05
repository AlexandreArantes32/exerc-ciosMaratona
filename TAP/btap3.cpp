#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int v[n][m];
    memset(v,0,sizeof(v));
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a&1){
            //linha
            for(int j=0;j<m;j++){
                v[b-1][j]=c;
            }
        }
        else{
            for(int j=0;j<n;j++){
                v[j][b-1]=c;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}