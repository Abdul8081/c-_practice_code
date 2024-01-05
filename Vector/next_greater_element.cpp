#include<iostream>
#include<vector>
using namespace std;
void nextGreterEle(int *arr, int n){
    int next[n];
    next[n-1] = -1;
    int mx = arr[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = mx;
        if(mx<arr[i]) mx = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<next[i]<<" ";
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    nextGreterEle(arr, n);
}