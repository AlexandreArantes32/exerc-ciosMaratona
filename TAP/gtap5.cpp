#include<bits//stdc++.h>

using namespace std;
const int N=1e6+3;
int v[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,total,x;
    while(1){
        total=0;
        v[0]=1;    
        for(int i=0;i<=v[0];i++){
            int a;
            cin>>a;
            v[i]=a;
        }
        if(v[0]!=0){
            total=0;
            x=v[0]/2;
            for(int i=(x+1);i<=v[0];i++){
                total+=v[i];
            }
            cout<<total<<"\n";
        }else{
            break;
        }
    }
    return 0;
}