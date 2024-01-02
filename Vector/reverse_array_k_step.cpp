#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePart(vector<int> &v, int i, int j){
    int n = v.size();
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
void rotate_by_kstep(vector<int> &v, int k){
    int n = v.size();
    reversePart(v,0,n-1-k);
    reversePart(v,n-k,n-1);
    reversePart(v,0,n-1);

}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    if(k>n) k = k%n;
    rotate_by_kstep(v,k);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}