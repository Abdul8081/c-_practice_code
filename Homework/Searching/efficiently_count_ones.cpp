#include<iostream>
using namespace std;
int f(int arr[], int n, int x, int check){
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            ans = mid;
            check == 3? hi = mid-1 : lo = mid + 1;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans;
}
int main(){
    int arr[] = {0, 0, 0,1, 1, 1, 1, 1, 1, 1, 1};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    int firstOccurence = f(arr, n, 1, 3);
    int lastOccurence = f(arr, n, 1, 4);

    cout<<(lastOccurence - firstOccurence) + 1<<endl;
}