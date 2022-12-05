#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c[2];
    
    cin>>a;
    while(a){
        b=0;
        c[0]=c[1]=0;
        for(int i=0;i<32;i++){
            if( a&(1<<i) ){
                c[b] = c[b]|(1<<i);
                b=1-b;
            }
        }
        cout<<c[0]<<" "<<c[1]<<"\n";
        cin>>a;
    }

    return 0;
}