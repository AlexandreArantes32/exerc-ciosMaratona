#include<bits/stdc++.h>

using namespace std;
vector<int> v;

void primos(int a){
    if(a>2){
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
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,total=0;
    cin>>n;
    primos(n);
    if(v.size()==0){
        cout<<"0\n";
    }
    else{
        int x;
        for(int i=6;i<=n;i++){
            x=0;
            for(int j=0;j<v.size() && x<3;j++){
                if( i%v[j]==0 ){
                    x++;
                }
            }
            if(x==2){
                total++;
            }
        }
        cout<<total<<"\n";
    }

    return 0;
}