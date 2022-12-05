#include <bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char c[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char d;
                cin>>d;
                c[i][j]=d;
            }
        }
        //linha
        for(int i=(n-2);i>=0;i--){
            //coluna
            for(int j=0;j<m;j++){
                if(c[i][j]=='*'){
                    //descer na coluna
                    for(int k=(i+1);k<n;k++){
                        if(c[k][j]=='.'){
                            c[k][j]='*';
                            c[k-1][j]='.';
                        }
                        else{
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<c[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}