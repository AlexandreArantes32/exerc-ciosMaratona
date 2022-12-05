#include<bits//stdc++.h>

using namespace std;

int v[5002];

bool solve(int a,int b){
    int x,y;
    x=v[a];
    y=v[x];
    if(y==b && x!=b){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bool triangulo=false;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        v[i]=a;
    }
    for(int i=1;i<=n;i++){
        if(solve(v[i],i)==true){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";

    return 0;
}