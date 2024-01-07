#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool findDup(vector<int> v){
    unordered_set<int> s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    if(v.size()>s.size()) return true;
    else return false;

}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    cout<<findDup(v);
}