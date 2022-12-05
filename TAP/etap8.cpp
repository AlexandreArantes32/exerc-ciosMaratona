#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(int a){
    vector<int> v;
    if(a>=2){
        v.push_back(2);
        int x;
        bool primo;
        for(int i=3;i<=a;i+=2){
            primo=true;
            x=i;
            for(int j=3;(j*j)<=i;j+=2){
                if(x%j==0){
                    primo=false;
                    break;
                }
            }
            if(primo){
                v.push_back(x);
            }
        }
    }
    else{
        cout<<"0\n";
        return ;
    }
    ll resp=1;
    int aux=0,x=a;
    for(int i=0;v[i]<=a;i++){
        aux=0;
        while(x%v[i]==0){
            aux++;
            x=x/v[i];
        }
        resp*=(pow( v[i],aux+1)-1) /(v[i]-1);
    }
    
    cout<<resp -a <<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        solve(a);
    }

    return 0;
}