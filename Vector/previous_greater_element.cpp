#include<iostream>
#include<vector>
using namespace std;
void prevGreterEle(int *arr, int n){
    int prev[n];
    prev[0] = -1;
    int mx = arr[0];
    for(int i=1; i<n; i++){
        prev[i] = mx;
        if(mx<arr[i]) mx = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<prev[i]<<" ";
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    prevGreterEle(arr, n);
}