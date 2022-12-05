#include<bits//stdc++.h>

using namespace std;
//linguagem:c++
//ALunos: Alexandre Arantes 
//        Lucas Pereira
int y=0;
vector<int> v ={3,1,2,4,6,5};
//vector<int> v={6,1,5,2,4,3};
//vector<int> v={6,5,4,3,2,1};
//vector<int> v={1,2,3,4,5,6};
//vector<int> v={4,4,2,3,3,5};
//vector<int> v={6,6,2,1,1,1};
//vector<int> v{3,3,3,3,3,3};
//vector<int> v={3,3,3,3,3,1};
void quicksort(int a,int b){
    y++;
    int ini,fim,x;
    bool bo=true;
    ini=a;
    fim=b;
    x=v[ini];
    while(ini!=fim){
        if(bo){
            if(x>v[fim]){
                swap(v[ini],v[fim]);
                bo=false;
            }
            fim--;
        }
        else{
            if(x<v[ini]){
                swap(v[ini],v[fim]);
                bo=true;
            }
            ini++;
        }
        y++;
    }
    if((ini-a)>0 && ini!=0){
        quicksort(a,(ini-1));
    }
    if((b-fim)>0 && fim!=(v.size()-1)){
        quicksort((fim+1),b);
    }
}

int main(){
    quicksort(0,v.size()-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<y<<"\n";
    return 0;
}