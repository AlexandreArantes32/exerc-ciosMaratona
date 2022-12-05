#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
long long v[N];
int n,m;

void solve(int a){
    int l,r,m,mid;
    l=0;
    r=n-1;
    while(r>=l){
        m=(l+r)>>1;
        if(v[m]<a){
            l=m+1;
            mid=m;
        }
        else{
            r=m-1;
        }
    }
    if(mid==-1){
        cout<<"1 "<<a<<"\n";
        return;
    }
    cout<<(mid +2)<<" "<<a-v[mid]<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int b;
    long long a;
    cin>>n>>m;
    cin>>v[0];
    for(int i=1;i<n;i++){
        cin>>a;
        v[i]=v[i-1]+a;
    }
    for(int i=0;i<m;i++){
        cin>>b;
        solve(b);
    }
    
    
    return 0;
}