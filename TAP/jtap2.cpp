#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        bool b=false;
        string s,s2;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]!='a'){ 
                s2=s.substr(0,(s.size()-i));
                s2+='a';
                s2+=s.substr(s.size()-i,s.size());
                b=true;
                break;
            }
        }
        if(b==true){
            cout<<"YES\n"<<s2<<"\n";
        }
        else{
            cout<<"NO\n";
        }
          
    }
    return 0;
}