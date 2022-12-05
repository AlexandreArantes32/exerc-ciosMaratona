#include<bits/stdc++.h>

using namespace std;

vector<long long> v;
void primos(int a){
    bool primo,pali;
    vector<int> dig;
    long long aux;
    int ini,fim,cont=0;
    for(long long i=a*1e8+a;i<(a+1)*1e8;i+=10){
        primo =true;
        for(long long j=3;j*j<i;j+=2){
            if(i%j==0){
                primo=false;
                break;
            }
        }
        if(primo){
            aux=i;
            dig.clear();
            while(aux!=0){
                dig.push_back(aux%10);
                aux=aux/10;
            }
            ini=0;
            fim = dig.size()-1;
            pali=true;
            while(ini!=fim){
                if(dig[ini]^dig[fim]){
                    pali=false;
                    break;
                }
                ini++;
                fim--;
            }
            if(pali){
                //cout<<"\npalindromo "<<i<<" ";
                v.push_back(i);
            }
            else if(cont==50000){
                cout<<i<<" ";
                cont=0;
            }
            cont++;
            //cout<<i<<" ";
            
        }
    }
}

int main(){
    vector<int> x={1,3,7,9};
    
    for(int m=0;m<x.size();m++){
        primos(x[m]);
        cout<<"\n terminou\n"<<x[m]<<"\n";
    }
    cout<<"fim\n";
    for(long long i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}