#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bool p[11][11],ps;
    int n,d,l,c,r;
    ps=true;
    memset(p,false,sizeof(p));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d>>l>>r>>c;
        if(d){
            if((r+l-1)<=10 && (r+l-1)>0){
                for(int j=r;j<=(r+l-1);j++){
                    if(p[j][c]==false){
                        p[j][c]=true;
                    }
                    else{
                        ps=false;
                    }
                }
            }
            else{
                ps=false;
            }
        }
        else{
            if((c+l-1)<=10 && (c+l-1)>0){
                for(int j=c;j<=(c+l-1);j++){
                    if(p[r][j]==false){
                        p[r][j]=true;
                    }
                    else{
                        ps=false;
                    }
                }
            }
            else{
                ps=false;
            }
        }
    }
    if(ps){
        cout<<"Y\n";
    }
    else{
        cout<<"N\n";
    }
    return 0;
}