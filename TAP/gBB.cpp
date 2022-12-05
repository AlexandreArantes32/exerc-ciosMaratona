#include <bits//stdc++.h>

using namespace std;

int main(){
    vector<int> bad;
    int N=1e6;
    for(int i=2;i*i<N;i++){
        bad.push_back(i*i);
    }
    for(int i=0;i<bad.size();i++){
        cout<<bad[i]<<" ";
    }
    return 0;
}
