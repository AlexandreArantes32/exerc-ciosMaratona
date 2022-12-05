#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    long long total=0;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ini,cont;
        long long soma=0;
        ini=cont=0;
        while(ini<n){
            cont=ini;
            soma=0;
            while(cont<n){
                soma+=v[cont];
                if(soma==0){
                    total++;
                }
                cont++;
            }
            ini++;
        }
        v.clear();
        cout<<total<<"\n";
        total=0;
    }
    return 0;
}