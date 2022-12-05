#include <bits/stdc++.h>
using namespace std;
const int N=1e9 +3;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>>v;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        int c,d;
        cin>>c>>d;
        v.push_back(make_pair(c,d));
    }
    sort(v.begin(),v.end());
    pair<int,int> aux;
    aux = v[0]; //10 400
    for(int i=1;i<v.size();i++){
        if(aux.second < v[i].first){ 
            cout<<aux.first<<" "<<aux.second<<"\n";
            aux=v[i];
            
        }
        else{
            if(aux.second < v[i].second){ 
                aux.second=v[i].second;
            }
        }
        if( i== (v.size() -1)){
            cout<<aux.first<<" "<<aux.second<<"\n";
        }
    }
    
    
    return 0;
}