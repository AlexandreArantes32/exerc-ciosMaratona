#include<bits/stdc++.h>

using namespace std;

int main(){
    double inc,perio,div,answ;
    for(int i=0;i<14;i++){
        cin>>perio>>div;
        inc=0.001*0.2*(div)/sqrt(3);
        perio=0.001*perio*div;
        answ=(inc/(perio*perio));
        cout<<fixed<<setprecision(9)<<answ<<"\n";
    }
    return 0;
}