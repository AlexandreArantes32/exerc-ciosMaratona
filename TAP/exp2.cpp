#include<bits//stdc++.h>

//#define pi 3.14159265358979323846;

const double pi = 3.14159265358979323846;

using namespace std;

int main(){
    cout<<fixed<<setprecision(9);
    double v[7]={11.81,1.765,5.752,13.18,12.96,4.605,13.65};
    double c[7]={0.102,0.101,0.102,0.101,0.102,0.101,0.100};
    double vr[4]={11.80,11.70,11.79,11.58};
    double vl[4]={1.759,1.782,1.767,1.753};
    double vc[4]={5.750,5.790,5.787,5.736};
    double z[7],ic[7],iv[7];
    double inc;
    //volt total
    for(int i=0;i<7;i++){
        z[i]=v[i]/c[i];
        if(v[i]<6.0){
            //double inc;
            inc=0.01*v[i] + 3*0.001;
            //cout<<v[i]<<" inc-> "<<inc<<"\n";
            iv[i]=inc;
        }
        else{
            //double inc;
            inc = 0.01*v[i] + 3*0.01;
            iv[i]=inc;
            //cout<<v[i]<<" inc-> "<<inc<<"\n";
        }
    }
    //corrente total
    for(int i=0;i<7;i++){
        //double inc;
        inc = 0.015*c[i] + 3*0.001;
        ic[i]=inc;
        //cout<<c[i]<<" inc-> "<<inc<<"\n";
    }
    //voltagens gerais
    /*for(int i=0;i<4;i++){
        //double inc;
        inc = 0.015*vr[i] + 3*0.001;
        cout<<"vr-  "<<vr[i]<<" inc-> "<<inc<<"\n";

        inc = 0.015*vl[i] + 3*0.001;
        cout<<"vl- "<<vl[i]<<" inc-> "<<inc<<"\n";

        inc = 0.015*vc[i] + 3*0.001;
        cout<<"vc- "<<vc[i]<<" inc-> "<<inc<<"\n";
    }*/
    int j=0;
    for(int i=0;i<7;i++){
        //cout<<z[i]<<" ";
        if(i==1 || i==4 || i==5 || i==6){
            double n;
            n = 0.015*vl[j] + 3*0.001;
            double aux,aux2;
            aux=n/(120*pi);
            aux=aux*aux;
            aux2=(v[i]/(2*3600*pi*c[i]))*0.08;
            aux2=aux2*aux2;
            inc=aux+aux2;
            inc=1000*sqrt(inc);
            cout<<inc<<" ";
            j++;
        }
    }
    return 0;
}