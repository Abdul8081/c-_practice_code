#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int x){
    int l = 0;
    int h = n-1;
    int ans = -1;
    while(l<=h){
        int m = l + (h - l)/2;
        if(arr[m]==x){
            ans = m;
            h = m - 1;
        }
        else if(arr[m]<x) l = m+1;
        else h = m-1;
    }
    return ans;
}
int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    cout<<firstOccurence(arr, n, x);
}