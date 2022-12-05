#include<bits//stdc++.h>

using namespace std;
queue<int> esq,dir;
int saida=0,aux,aux2,aux3;
bool b=false;

void andaesq(){
    aux=esq.front();
    esq.pop();
    if(dir.size()!=0){
        aux2=dir.front();
    }
    else{
        aux2=1e6+2;
    }
    if(aux<saida){
        saida+=10;
        while(esq.size()!=0){
            aux3=esq.front();
            if((aux3+10)<saida){
                esq.pop();
                aux=aux3;
            }
            else{
                break;
            }
        }
    }
    else{
        saida=(10+aux);
    }//55 64 42
    //65  64 42 = 12 // 74  // 73
    while(esq.size()!=0 && b==true){
        aux3=esq.front();
        if((aux3-aux)<10){
            saida+=(aux3-aux);
            aux=aux3;
            esq.pop();
        }
        else if(aux3<aux2){
            saida=(aux3+10);
            esq.pop();
            aux=aux3;
        }
        else{
            b=false;
        }
    }
    b=false;
}

void andadir(){
    aux=dir.front();
    dir.pop();
    if(esq.size()!=0){
        aux2=esq.front();
    }
    else{
        aux2=1e6+2;
    }
    if(aux<saida){
        saida+=10;
        while(dir.size()!=0){
            aux3=dir.front();
            if((aux3+10)<saida){
                dir.pop();
                aux=aux3;
            }
            else{
                break;
            }
        }
    }
    else{
        saida=(10+aux);
    }
    while(dir.size()!=0 && b==false){
        aux3=dir.front();
        if((aux3-aux)<10){
            saida+=(aux3-aux);
            aux=aux3;
            dir.pop();
        }
        else if(aux3<aux2){
            saida=(aux3+10);
            dir.pop();
            aux=aux3;
        }
        else{
            b=true;
        }
    }
    b=true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,c;
        cin>>a>>c;
        if(c){
            dir.push(a);
        }
        else{
            esq.push(a);
        }
    }
    if(esq.size()==0 || (dir.size()!=0 && dir.front()<esq.front())){
        b=false;
    }
    else{
        b=true;
    }
    while(esq.size()!=0 || dir.size()!=0){
        if(b){
            andaesq();
        }
        else{
            andadir();
        }
    }
    cout<<saida<<"\n";
    return 0;
}
/*
6
5 1
6 0
8 0
10 1
15 1
22 1
*/