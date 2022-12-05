#include<bits//stdc++.h>

using namespace std;

int main(){
    long long a,b,aux=1;
    cin>>a>>b;
    while(b!=0){
        if(b&1){
            aux=aux*a;
        }
        b=b>>1;
        a=a*a;
    }
    cout<<aux<<"\n";
    return 0;
}