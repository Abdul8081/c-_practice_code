#include<iostream>
#include<vector>
using namespace std;
int f(vector<int> &v, int si, int ei, int k){
    int pivot_ele = v[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivot_ele) count++;
    }

    int pdx = si + count;
    swap(v[pdx], v[(si+ei)/2]);
    int i = si;
    int j = ei;
    while(i<pdx and j>pdx){
        if(v[i]<=pivot_ele) i++;
        else if(v[j]>pivot_ele) j--;
        else if(v[i]>pivot_ele and v[j]<=pivot_ele){
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return pdx;
}
int kthsmall(vector<int> &v, int si, int ei, int k){
    int pi = f(v, si, ei, k);
    if(pi+1==k) return v[pi];
    else if(pi+1<k) return kthsmall(v, pi+1, ei, k);
    else return kthsmall(v, si, pi-1, k); 
}
int main(){
    vector<int> v = {4, 5, -6, 3, 2, 1};
    for(int i=0;i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    int k = 5;
    cout<<kthsmall(v, 0, v.size()-1, k);

}