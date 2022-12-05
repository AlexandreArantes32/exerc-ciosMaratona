#include <bits//stdc++.h>
using namespace std;

const int N=1e4+2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,resp=1,ant,n,aux=1;

    cin>>n;
    
    ant=INT64_MAX;
    while(n--){
        cin>>a;
        if(a==ant){
            aux++;
            resp=max(aux,resp);
        }
        else{
            ant=a;
            aux=1;
        }
    }
    
    cout<<resp<<"\n";
    return 0;
}