#include <bits//stdc++.h> 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long resp;
    int t;
    vector<int> v;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        resp=0;
        n--;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<v.size();j++){
                int aux,aux2;
                aux=v[i]&v[j];
                aux2=v[i]^v[j];
                if(aux>=aux2){
                    resp++;
                }
            }
        }
        v.clear();
        cout<<resp<<"\n";
    }
    return 0;
}
