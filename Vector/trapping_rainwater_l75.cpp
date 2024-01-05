#include<iostream>
#include<algorithm>
using namespace std;
int trap_rainWater(int arr[], int n){
    int prev[n];
    prev[0] = -1;
    int mx = arr[0];
    for(int i=1; i<n; i++){
        prev[i] = mx;
        if(mx<arr[i]) mx = arr[i];
    }


    int next[n];
    next[n-1] = -1;
    mx = arr[n-1];
    for(int i=n-2; i>=0; i--){
        next[i] = mx;
        if(mx<arr[i]) mx = arr[i];
    }

    for(int i=0; i<n; i++){
        prev[i] = min(prev[i], next[i]);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(prev[i]>arr[i]){
            ans+= (prev[i] - arr[i]);
        }
    }
    
    return ans;

}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<trap_rainWater(arr, n);
}