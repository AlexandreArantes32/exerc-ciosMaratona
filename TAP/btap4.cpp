#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n;
        if(n%3==2){
            b=(n+5)/3;
            c=n/3-1;
            a=n/3+1;
        }
        else if(n%3==0 || (n-1)%2==0){
            b=(n+5)/3;
            a=n/3;
            c=a-1;
        }
        else{
            b=(n+5)/3;
            a=n/3+1;
            c=n/3-2;
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}
