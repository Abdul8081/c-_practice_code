#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n/2;i++){
        int temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    reverse(v);
}