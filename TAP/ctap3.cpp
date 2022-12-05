#include<bits//stdc++.h>

using namespace std;
int ve[502],maior;
void maximo(int m){
    maior=0;
    for(int i=1;i<=m;i++){
        maior=max(maior,ve[i]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,q,seq=0,v[502][502];
    maior=0;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        int um=0;
        for(int j=1;j<=m;j++){
            int a;
            cin>>a;
            v[i][j]=a;
            if(a){
                um++;
                seq=max(seq,um);
            }
            else{
                um=0;
            }
        }
        maior=max(seq,maior);
        ve[i]=seq;
        seq=0;
    }
    for(int i=0;i<q;i++){
        int a,b,aux=0;
        cin>>a>>b;
        v[a][b]=1-v[a][b];
        if(v[a][b]){
            int primeiro=b,ultimo=b;
            for(int j=(b-1);j>=1;j--){
                if(v[a][j]!=0){
                    primeiro=j;
                }
                else{
                    break;
                }
            }
            for(int j=(b+1);j<=m;j++){
                if(v[a][j]!=0){
                    ultimo=j;
                }
                else{
                    break;
                }
            }
            aux=ultimo-primeiro+1;
            if(aux>ve[a]){
                maior=max(maior,aux);
                ve[a]=aux;
            }
        }
        else{
            int um=0;
            for(int j=1;j<=m;j++){
                if(v[a][j]){
                    um++;
                    aux=max(um,aux);
                }
                else{
                    um=0;
                }
            }
            if(ve[a]>aux){
                if(ve[a]==maior){
                    ve[a]=aux;
                    maximo(n);
                }
                else{
                    ve[a]=aux;
                }
            }
        }
        cout<<maior<<"\n";  
    }
    return 0;
}