#include<bits//stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a>=1900){
            cout<<"Division 1\n";
        }
        else if(a>=1600){
            cout<<"Division 2\n";
        }
        else if(a>=1400){
            cout<<"Division 3\n";
        }
        else{
            cout<<"Division 4\n";
        }
    }
    return 0;
}