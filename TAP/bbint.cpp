#include<bits//stdc++.h>

using namespace std;
//linguagem:c++
//alunos:Alexandre Arantes
//       Lucas Pereira
vector<int> v={1,2,7,8,20,23,35,49,200};

int bbInterativo(int a){
    int ini,fim,meio;
    ini=0;
    fim=v.size()-1;
    while(ini<=fim){
        meio=(ini+fim)/2;
        if(v[meio]==a){
            return meio;
        }
        if(v[meio]>a){
            fim=meio-1;
        }
        else{
            ini=meio+1;
        }
    }
    return -1;
}

int main(){
    int x;
    x=bbInterativo(4);
    if(x==-1){
        cout<<"valor nao encontrado\n";
    }
    else{
        cout<<"valor esta na posicao "<<x<<"\n";
    }
    x=bbInterativo(7);
    if(x==-1){
        cout<<"valor nao encontrado\n";
    }
    else{
        cout<<"valor esta na posicao "<<x<<"\n";
    }
    x=bbInterativo(1);
    if(x==-1){
        cout<<"valor nao encontrado\n";
    }
    else{
        cout<<"valor esta na posicao "<<x<<"\n";
    }
    x=bbInterativo(200);
    if(x==-1){
        cout<<"valor nao encontrado\n";
    }
    else{
        cout<<"valor esta na posicao "<<x<<"\n";
    }
    x=bbInterativo(36);
    if(x==-1){
        cout<<"valor nao encontrado\n";
    }
    else{
        cout<<"valor esta na posicao "<<x<<"\n";
    }
    return 0;
}