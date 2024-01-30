#include<iostream>
using namespace std;
int lastOccurence(int arr[], int n, int x){
    //binary search
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            ans = mid;
            lo = mid+1;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 4;
    cout<<lastOccurence(arr, n, x);
}