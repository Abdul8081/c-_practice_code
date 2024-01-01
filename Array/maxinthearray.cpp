#include<iostream>
#include<climits>
using namespace std;
int maxFind(int *arr, int n){
    int mx = INT_MIN;
    for(int i=0;i<n;i++) if(arr[i]>mx) mx = arr[i];
    return mx;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maxFind(arr,n);
}