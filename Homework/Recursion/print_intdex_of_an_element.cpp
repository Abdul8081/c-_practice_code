#include<iostream>
#include<vector>
using namespace std;
int f(vector<int> &v, int idx, int tr){
    if(idx>v.size()) return -1;
    if(v[idx]==tr){
        return idx;
    }
    return f(v, idx+1, tr);
}
int main(){
    vector<int> v = {7,8,9,5,6};
    cout<<f(v, 0, 8);
}