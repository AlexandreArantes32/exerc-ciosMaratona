#include <bits//stdc++.h>

using namespace std;
long long  resp;

void solve(int x){
    if(x!=1){
        if(x&1){
            resp++;
            x=x&~(1<<0);
            x=x>>1;
            solve(x);
        }
        else{
            x=x>>1;
            solve(x);
        }
    }
    else{
        resp++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    resp=0;
    solve(x);
    cout<<resp<<"\n";
    return 0;
}