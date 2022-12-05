#include<bits/stdc++.h>

using namespace std;
const int N=1e4+6;
bool aux[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n,y=-1,x=-1;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
        y=max(y,a);
    }
    for(int i=0;i<v.size();i++){
        if(aux[v[i]]==false){
            if(y%v[i]==0){
                aux[v[i]]=true;
                v[i]=0;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        x=max(x,v[i]);
    }
    cout<<y<<" "<<x<<"\n";
    return 0;
}