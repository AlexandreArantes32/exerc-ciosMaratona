#include <bits/stdc++.h>
using namespace std;
const int N=1e5 +3;

void imprimir( queue<char> q){
    int j =q.size();
    for(int i=0;i<j;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    queue<char> q;
    
    for(int i=0;i<16;i++){
        q.push('A'+i);
    }
    char c1,c2;
    for(int i=0;i<15;i++){
        imprimir(q);
        c1=q.front();
        q.pop();
        c2=q.front();
        q.pop();
        int a,b;
        cin>>a>>b;
        if(a>b){
            q.push(c1);
        }
        else{
            q.push(c2);
        }
        
    }
    cout<<q.front()<<"\n";
    return 0;
}


