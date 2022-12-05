#include <bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,aux;
    vector<int> d;
    queue<int> q;
    cin>>a;
    while(a!=0){
        for(int i=1;i<=a;i++){
            q.push(i);
        }
        while(q.size()!=1){
            aux=q.front();
            q.pop();
            d.push_back(aux);
            aux=q.front();
            q.pop();
            q.push(aux);
        }
        cout<<"Discarded cards:";
        for(int i=0;i<d.size();i++){
            if(i==(d.size()-1)){
                cout<<" "<<d[i]<<"\n";
            }
            else{
                cout<<" "<<d[i]<<",";
            }
        }
        cout<<"Remaining card: "<<q.front()<<"\n";
        q.pop();
        d.clear();
        cin>>a;
    }
    return 0;
}