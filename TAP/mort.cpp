#include <bits//stdc++.h>

using namespace std;

class Mortgage
{
public:
    Mortgage(){};
    long long monthlyPayment(int preco, int Tjuros, int ano)
    {
        long long pagmes,juros,aux,x,ini,fim,y;
        double d;
        int tempo=ano*12;
        ini=0;
        fim= preco + preco*Tjuros/1200;
        for(int i=0;i<80;i++){
            pagmes=(ini+fim)/2;
            y=preco;
            for(int j=0;j<tempo;j++){
                y-=pagmes;
                d=1.0*y*Tjuros/1200;
                d=ceil(d);
                y+=d;

            }
            if(y<0){
                ini=pagmes+1;
            }
            else{
                if(y<)
                fim=pagmes-1;
            }
            cout<<pagmes<<" "<<y<<"\n";
        }
        return pagmes;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Mortgage test;
    int preco,pagmes,a;
    cin>>preco>>pagmes>>a;
    cout<<::fixed<<setprecision(9);
    cout<<test.monthlyPayment(preco,pagmes,a)<<"\n";   
    return 0;
}