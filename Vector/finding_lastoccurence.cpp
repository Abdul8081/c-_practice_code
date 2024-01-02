#include<iostream>
#include<vector>
using namespace std;
int lastOccurIndex(vector<int> v,int x){
    int n = v.size();
    for(int i=n-1;i>=0;i--){
        if(v[i]==x) return i;
    }
    return -1;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int x; cin>>x;
    cout<<lastOccurIndex(v,x);
}