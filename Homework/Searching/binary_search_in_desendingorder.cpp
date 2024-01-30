#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,8,7,6,5};
    int x = 5;
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            cout<<mid;
            break;
        }
        else if(arr[mid]<x) hi = mid - 1;
        else lo = mid + 1;
    }
}