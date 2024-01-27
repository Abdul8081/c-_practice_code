#include<iostream>
using namespace std;
bool BinarySearch(int *arr,int n,int x){
    int l = 0;
    int r = n-1;
    while(l<r){
        int m = l + (r-l)/2;
        if(arr[m]==x) return true;
        else if(arr[m]>x) r = m-1;
        else l = m+1;
    }
    return false;
}
int main(){
    int arr[] = {7, 8, 9, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 and (arr[j-1]>arr[j])){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    int x; cin>>x;
    cout<<BinarySearch(arr,n,x);
}