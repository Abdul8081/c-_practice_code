#include<iostream>
#include<vector>
using namespace std;
bool check(vector<vector<int>>arr, int x){
    int m = arr.size();
    int n = arr[0].size();
    int lo = 0;
    int hi = (m*n) - 1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid/n][mid%n]==x) return true;
        else if(arr[mid/n][mid%n]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}
int main(){
    vector<vector<int>>arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int x; cin>>x;
    cout<<check(arr, x);
}