#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        vector<int> v;
        int a,k,aux,x;
        cin>>a;
        a--;
        for(int i=0;i<=a;i++){
            int b;
            cin>>b;
            v.push_back(b);
        }
        if(a==0){
            aux=v[0];
        }else{
            aux=v[0];
            for(int i=0;i<a;i++){
                x=v[i+1]-v[i];
                aux=max(x,aux);
            }
            k=aux;
            if(v[0]==k){
                k--;
            }
            for(int i=0;i<a;i++){
                x=v[i+1]-v[i];
                if(x==k){
                    k--;
                }
                else if(x>k){
                    aux++;
                    k=aux;
                }
            }
        }
        cout<<"Case "<<j<<": "<<aux<<"\n";
    }
    return 0;
}