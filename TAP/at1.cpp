#include<bits/stdc++.h>
using namespace std;
vector<int> v[51];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    string s,res;
    cin>>t;
    bool possivel;
    while(t--){
        cin>>n;
        for(int i=0;i<51;i++){
            v[i].clear();
        }
        res = "YES";
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v[a].push_back(i);
        }
        cin>>s;
        for(int i=0;i<51;i++){
            if(v[i].size()>1){
                for(int j=0; j < (v[i].size() - 1 );j++){
                    if(s[v[i][j]] != s[v[i][j+1]]){
                        res = "NO";
                        break;
                    }
                }
                if(res[0]=='N'){
                    break;
                }

            }
        }
        cout<<res<<"\n";

    }

    return 0;
}
