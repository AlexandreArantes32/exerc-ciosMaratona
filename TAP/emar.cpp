#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 +3;

vector <int> v[N];
pair<int,bool> andar[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v[a].push_back(i);
        
    }

    return 0;
}