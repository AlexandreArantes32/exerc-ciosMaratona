#include<bits/stdc++.h>

using namespace std;
vector<int> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,sum,cont,m,s,a;
    cin>>t;
    while(t--){
        cin>>m>>s;
        sum=cont=0;
        v.clear();
        for(int i=0;i<m;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(m==1 || v[0]!=1){
            sum += (v[0]*(v[0]-1))/2;
        }
        for(int i=0;i<=(m-2);i++){
            if( v[i] != (v[i+1]-1) ){
                sum +=( (v[i]+v[i+1])*(v[i+1]-v[i]-1) )/2;
            }
            
        }

        if(sum<s){
            a=v[m-1]+1;
            while(sum<s){
                sum+=a;
                a++;
            }
        }
        if(sum==s){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;

}