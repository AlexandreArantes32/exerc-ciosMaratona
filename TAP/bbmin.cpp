#include<bits/stdc++.h>

using namespace std;
vector<int> v;
//closest to the left
int bbmin(int a){
    int l=-1,r = v.size(),m;
    while(r>(l+1)){
        m=(l+r)/2;
        if(v[m]<= a){
            l=m;
        }
        else{
            r=m;
        }
    }
    return l;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    while(m--){
        int a;
        cin>>a;
        cout<<bbmin(a)+1<<"\n";
    }

    return 0;
}