#include<bits//stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int v[n];
        memset(v,-1,sizeof(v));
        int aux=-1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v[a]++;
            if(v[a]>=2){
                aux=a;
            }
        }
        cout<<aux<<"\n";
    }
    return 0;
}