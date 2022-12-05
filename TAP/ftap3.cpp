#include<bits//stdc++.h>

using namespace std;
double d;
void distance(pair<int,int> a, pair<int,int>b){
    double di=pow((a.first-b.first),2) +pow((a.second-b.second),2);
    di=sqrt(di);
    d+=di;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(9);
    int n,k;
    d=0;
    vector<pair<int,int>>v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<(n-1);i++){
        distance(v[i],v[i+1]);
    }
    double tempo=k*d/50;
    cout<<tempo<<"\n";
    return 0;
}