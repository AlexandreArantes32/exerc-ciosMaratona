#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long total;
    cin>>t;
    while(t--){
        total=0;
        int c,n,x,m;
        cin>>c>>m>>x;
        if(c>=1 && m>=1){
            n=min(c,m);
            if(x>=n){
                total+=n;
                c=0;
            }
            else{
                total+=x;
                n-=x;
                c-=x;
                m-=x;
            }
            if(c>0 && m>0 && ((c+m)>2)){
                int novo=n*2;
                if(m>=novo){
                    total+=n;
                }
                else{
                    while(c>0 && m>0 && ((c+m)>2)){
                        int aux=abs(m-c);
                        if(aux>min(c,m)){
                            total+=min(c,m);
                            c=0;
                        }
                        else if(aux==0){
                            total+=(c+m)/3;
                            c=0;
                        }
                        else if(c>m){
                            c-=(2*aux);
                            m-=aux;
                            total+=aux;
                        }
                        else{
                            c-=aux;
                            m-=(2*aux);
                            total+=aux;
                        }
                    }
                }
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}