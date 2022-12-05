#include<bits/stdc++.h>

using namespace std;
int n[2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,nx,q,x,y;
    long long a,sum;
    bool par,impar;
    cin>>t;
    while(t--){
        cin>>nx>>q;
        n[0]=n[1]=0;
        sum=0;
        par=impar=true;
        for(int i=0;i<nx;i++){
            cin>>a;
            sum+=a;
            if(a&1){
                n[0]++;//impar em zero
            }
            else{
                n[1]++;//par em 1
            }
        }
        while(q--){
            cin>>x>>y;
            if(x&1){
                if(impar==true){
                    sum+= n[0]*y;
                    if(y&1){
                        impar = false;
                    }
                }
                if( par == false){
                    sum+= n[1]*y;
                    if(y&1){
                        par = true;
                    }
                }
            }
            else{
                if(par==true){
                    sum+= n[1]*y;
                    if(y&1){
                        par=false;
                    }
                }
                if(impar == false){
                    sum+= n[0]*y;
                    if(y&1){
                        impar=true;
                    }
                }
            }
            cout<<sum<<"\n";
        }
    }

    return 0;
}