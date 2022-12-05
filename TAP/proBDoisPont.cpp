#include <bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a;
    vector<int> v;
    int ve[301];
    cin>>t;
    while(t--){
        cin>>a;
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
            v.push_back(b);
        }
        memset(ve,0,sizeof(ve));
        int ini,fim,cont;
        ini=cont=0;
        fim=v.size()-1;
        while(ini<=fim){
            if(cont%2==0){
                ve[cont]=v[ini];
                ini++;
            }
            else{
                ve[cont]=v[fim];
                fim--;
            }
            cont++;
        }
        for(int i=0;i<v.size();i++){
            cout<<ve[i]<<" ";
        }
        cout<<"\n";
        v.clear();
    }
    return 0;
}
