#include <bits//stdc++.h>

using namespace std;
vector<int> v;
vector<bool> b;
int total=0;

void solve(int a,int m,int i){
    int ini,fim,meio;
    ini=i+1;
    fim=v.size()-1;
    while(ini<=fim){
        meio=(ini+fim)/2;
        if((v[meio]+a)==m && b[meio]==true){
            total++;
            b[meio]=false;
        }
        else if((v[meio]+a)>m){
            fim=meio-1;
        }
        else{
            ini=meio+1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            b.push_back(true);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(b[i]==true){
                solve(v[i],m,i);
            }
        }
        cout<<total<<"\n";
        v.clear();
        b.clear();
        total=0;
    }
    return 0;
}