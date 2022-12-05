#include<bits//stdc++.h>

using namespace std;

vector<char> c;

bool letra(char x){
    for(int i=0;i<c.size();i++){
        if(c[i]==x){
            return true;
        }
    }
    if(c.size()==3){
        c.clear();
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,cont,dias;
    
    string s;
    cin>>t;
    while(t--){
        cont=dias=0;
        cin>>s;
        c.clear();
        for(int i=0;i<s.size();i++){
            if(letra(s[i])==false){
                cont++;
                c.push_back(s[i]);
            }
            if(cont==3){
                if(i!=(s.size()-1) && letra(s[i+1])==false){
                    cont=0;
                    dias++;
                }
                else if(i==(s.size()-1)){
                    cont=0;
                    dias++;
                }
            }
        }
        if(cont>0){
            dias++;
        }
        cout<<dias<<"\n";
    }
}