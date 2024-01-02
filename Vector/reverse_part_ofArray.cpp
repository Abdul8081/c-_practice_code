#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePart(vector<int>&v, int i, int j){
    int n = v.size();
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    int n ; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    reversePart(v,1,3);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}