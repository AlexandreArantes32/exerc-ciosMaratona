#include<bits/stdc++.h>

using namespace std;
const int N=1e5+3;

int n,v[N];
int bbmin(int a){
    int l,r,m;
    l=-1;
    r=n;
    while(r>(l+1) ){
        m=(l+r)/2;
        if(v[m]<=a){
            l=m;
        }
        else{
            r=m;
        }
    }
    return l;
}
int bbmax(int a){
    int l,r,m;
    l=-1;
    r=n;
    while(r>(l+1)){
        m=(l+r)/2;
        if(v[m]< a){
            l=m;
        }
        else{
            r=m;
        }
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,y,x,aux;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v[i]=a;
    }
    sort(v,v + n);
    
    cin>>c;
    while(c--){
        cin>>a>>b;
        x = bbmin(b);
        y = bbmax(a);
        cout<<  x - y  +1 <<" ";
    }
    cout<<"\n";

    return 0;
}