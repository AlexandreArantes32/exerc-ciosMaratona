#include <bits//stdc++.h>

using namespace std;

int tap(int c,int m){
    int x=0,total=0,n;
    if(c>=1 && m>=1){
            n=min(c,m);
            if(x>=n){
                total+=n;
                c=m=x=0;
            }
            else{
                total+=x;
                n-=x;
                c-=x;
                m-=x;
            }
            if(c>0 && m>0 && ((c+m)>2)){
                int novo=n*2;
                if(n!=c){
                    swap(c,m);
                }
                if(m>=novo){
                    total+=c;
                }
                else{
                    while(c>0 && m>0 && ((c+m)>2)){
                        int aux=abs(c-m);
                        if(c>m){
                            c-=2*aux;
                            m-=aux;
                            total+=aux;
                        }
                        else{
                            c-=aux;
                            m-=2*aux;
                            total+=aux;
                        }
                    }
                }
            }
        }
    return total;
}

int bruta(int c,int m){
    int total=0;
     while(c>=1 && m>=1 && (c+m)>2){
                if(c>=m && c>1){
                    c-=2;
                    m--;
                    total++;
                    //cout<<c<<"\n";
                }
                else if(m>=c && m>1){
                    m-=2;
                    c--;
                    total++;
                }
                if(c==1 && m==1){
                    break;
                }
    }
    return total;
}

int main() {
    int c,m,total=0;
    //int i=1,j=1;
    for(int i=1;i<35;i++){
        for(int j=10;j<45;j++){
            int x=tap(i,j);
            int y=bruta(i,j);
            if(x!=y){
                cout<<"i :"<<i<<" j: "<<j<<" meu: "<<x<<" deveria: "<<y<<"\n";
            }
            else{
                cout<<"i "<<i<<" j "<<j<<"\n";
            }
        }
    }
    return 0;
}