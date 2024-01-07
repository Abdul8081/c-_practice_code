#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool cheksubset(int arr[], int nm, int a[], int n){
    unordered_set<int> s;
    for(int i=0;i<nm;i++) s.insert(arr[i]);
    for(int i=0;i<n;i++){
        if(s.find(a[i])==s.end()) return false;
    }
    return true;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<cheksubset(arr,10,a,n);
    
}