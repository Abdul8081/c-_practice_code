#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    int x = INT_MIN;
    int y = INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n ;i++){
        if(x<arr[i]) {
            y = x;
            x = arr[i];
        }
        else if(arr[i]!=x and arr[i]>y) y = arr[i];
    }
    cout<<y;
}