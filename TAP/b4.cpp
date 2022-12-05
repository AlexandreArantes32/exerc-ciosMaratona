#include<bits//stdc++.h>

using namespace std;
vector<int>li[1002],co[1002];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,total=0;
    cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v[i][j]=x;
            if(x){
                li[i].push_back(j);
                co[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){   
                int aux=li[i].size()-1;
                int aux2=co[j].size()-1; 
                if(aux>=0 && li[i][0]<j){
                    total++;
                }
                if(aux>=0 && li[i][aux]>j){
                    total++;
                }
                if(aux2>=0 && co[j][0]<i){
                    total++;
                }
                if(aux2>=0 && co[j][aux2]>i){
                    total++;
                }
            }
        }
    }
    cout<<total<<"\n";
    return 0;
}