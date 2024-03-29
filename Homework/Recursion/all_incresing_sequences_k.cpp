#include<iostream>
#include<vector>
using namespace std;
void f(int k, vector<int> &v, vector<int> tr, int idx){
    if(idx==v.size()){
        if(tr.size()==k){
            for(int i=0;i<tr.size();i++){
                cout<<tr[i]<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    f(k, v, tr, idx+1);
    if(tr.size()==0){
        tr.push_back(v[idx]);
        f(k, v, tr, idx+1);
    }
    else if(v[idx-1]==tr[tr.size()-1]){
        tr.push_back(v[idx]);
        f(k, v, tr, idx+1);
    }
}
int main(){
    int k = 4, n = 7;
    vector<int> v, tr;
    for(int i=1;i<=n;i++) v.push_back(i);
    f(k, v, tr, 0);
}