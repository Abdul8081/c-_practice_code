#include<iostream>
#include<climits>
using namespace std;
int second_larg(int arr[], int n){
    int mx = INT_MIN;
    for(int i=0;i<n;i++) if(arr[i]>mx) mx = arr[i];
    int smx = INT_MIN;
    for(int i=0;i<n;i++) if(arr[i]>smx and arr[i]!=mx) smx = arr[i];
    return smx;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n;i++) cin>>arr[i];
    cout<<second_larg(arr,n);
}