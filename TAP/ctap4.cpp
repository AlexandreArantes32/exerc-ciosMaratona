#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,total=0;
    cin>>n>>m;
    int v[n][m];
    int aux[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            v[i][j]=a;
        }
    }
    //meio
    for(int i=1;i<(n-1);i++){
        for(int j=1;j<(m-1);j++){
            if(v[i][j]==0){
                for(int k=0;k<4;k++){
                    if(v[i+aux[k][0]][j+aux[k][1]]){
                        total++;
                    }
                }
            }
        }
    }
    //canto 1
    if(v[0][0]==0){
        if( m!=1 && v[0][1] ){
            total++;
        }
        if(n!=1 && v[1][0]){
            total++;
        }
    }//canto 2
    if(m!=1 && v[0][m-1]==0){
        if(v[0][m-2]){
            total++;
        }
        if(n!=1 && v[1][m-1]){
            total++;
        }
    }
    //canto 3
    if(n!=1 && v[n-1][0]==0){
        if( m!=1 && v[n-1][1] ){
            total++;
        }
        if(v[n-2][0]){
            total++;
        }
    }
    //canto 4
    if(m!=1 && n!=1 && v[n-1][m-1]==0){
        if(v[n-2][m-1]){
            total++;
        }
        if(v[n-1][m-2]){
            total++;
        }
    }
    //linha 1
    int x[3][2]={{0,-1},{0,1},{1,0}};
    for(int i=1;i<(m-1);i++){
        if(v[0][i]==0){
            for(int j=0;j<3;j++){
                if(v[i+x[j][0]][i+x[j][1]]){
                    total++;
                }
            }
        }
    }
    //ultima linha
    x[0][2]=-1;
    x[1][2]=0;
    for(int i=1;i<(m-1);i++){
        if(v[n-1][i]==0){
            for(int j=0;j<3;j++){
                if(v[i+x[j][0]][i+x[j][1]]){
                    total++;
                }
            }
        }
    }
    //primeira coluna
    int y[3][2]={{-1,0},{0,1},{1,0}};
    for(int i=1;i<(n-1);i++){
        if(v[i][0]==0){
            for(int j=0;j<3;j++){
                if(v[i+y[j][0]][i+y[j][1]]){
                    total++;
                }
            }
        }
    }
    //ultima coluna;
    y[0][1]=0;
    y[1][1]=-1;
    for(int i=1;i<(n-1);i++){
        if(v[i][m-1]==0){
            for(int j=0;j<3;j++){
                if(v[i+y[j][0]][i+y[j][1]]){
                    total++;
                }
            }
        }
    }
    cout<<total<<"\n";
    return 0;
}