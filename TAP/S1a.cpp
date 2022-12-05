#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        a--;
        b=abs(c-b);
        b=b+c-1; 
        if(b==a){
            cout<<"3\n";
        }
        else if(a>b){
            cout<<"2\n";
        }
        else{
            cout<<"1\n";
        }

    }
    return 0;
}