#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void print(vector<int> v, int idx, int mx){
    if(idx==v.size()){
        cout<<mx;
        return;
    }
    mx = max(mx,v[idx]);
    print(v, idx+1, mx);
}
int store(vector<int> v, int idx){
    if(idx==v.size()) return INT_MIN;
    return max(v[idx], store(v,idx+1));
}
int main(){
    //print
    // vector<int> v = {7,8,9,4,0,1,2};
    // print(v,0,INT_MIN);

    //store
    vector<int> v = {7, 8, 9, 4, 6 ,0 ,1 ,2};
    cout<<store(v,0);


}