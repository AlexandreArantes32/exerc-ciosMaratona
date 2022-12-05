#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    vector<int> x,y;
    int carry=0;
    while(1){
        cin>>a>>b;
        
        if(a==0 && b==0){
            break;
        }
        if(b>a){
            swap(a,b);
        }
        carry=0;
        while(a!=0){
            x.push_back(a%10);
            a=a/10;
        }
        while(b!=0){
            y.push_back(b%10);
            b=b/10;
        }
        int i=0;
        for( i=0;i<x.size() && i<y.size();i++){
            if( (x[i]+y[i]) >= 10){
                if(i!=(x.size()-1)) x[i+1]++;
                carry++;
            }
        }
        while(i<(x.size()-1)){
            if(x[i]>=10){
                carry++;
                if(i!=(x.size()-1)){
                    x[i+1]++;
                }
            }
            i++;
        }
        
        if(carry==0){
            cout<<"No carry operation.\n";
        }
        else if(carry==1){
            cout<<"1 carry operation.\n";
        }
        else{
            cout<<carry<<" carry operations.\n";
        }
        y.clear();
        x.clear();
        
    }
    
    return 0;
}