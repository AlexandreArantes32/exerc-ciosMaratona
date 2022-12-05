#include <bits/stdc++.h>
using namespace std;
const int N=1e3 +3;

vector<string> aux[N];//1 2 5 10 1 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,string>> v;
    int a,b,c;
    string s;
    cin>>a>>b; //a =pessoas b=nº de times
    while(a--){
        cin>>s>>c;
        v.push_back(make_pair(-c,s));
    }
    
    sort(v.begin(),v.end());
    int j=0;
    for(int i=0;i<v.size();i++){
        aux[j].push_back(v[i].second);
        j++;
        if(j==b){
            j=0;
        }
    }
    for(int i=0;i<b;i++){
        cout<<"Time "<< i+1 <<"\n";
        sort(aux[i].begin(),aux[i].end());
        for (int k=0;k<aux[i].size();k++){
            cout<<aux[i][k]<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}