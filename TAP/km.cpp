#include<bits/stdc++.h>

using namespace std;

double expLenta(int n,int x){
    for(int i=0;i<n;i++){
        x=x*x;
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n,k;
    cin>>a>>b>>n>>k;
    double x,y=1,aux,dec;
    x = 1.0*a + sqrt(b);
    bool convergiu=false;
    while(n!=0){
        cout<<fixed<<setprecision(9)<<x<<"\n";
        if(n&1){
            y*=x;
            if(y>1e6){
                dec=modf(x,&aux);
                y=(long long)aux%100000;
                y+=dec;
            }
        }
        n=n/2;
        x=x*x;
        dec=modf(x,&aux);
        if(x>1e6){
            x=(long long)aux%10000;
            x+=dec;
        }
        cout<<fixed<<setprecision(9)<<dec<<" d\n";
        if(dec<0.0009 && convergiu==false){
            convergiu=true;
            //cout<<fixed<<setprecision(9)<<dec<<" convergiu com\n";
        }
    }
    cout<<fixed<<setprecision(9)<<y<<" d\n";
    return 0;
}