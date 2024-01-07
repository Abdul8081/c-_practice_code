#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    int x = INT_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n ;i++){
        if(x>arr[i]) {
           x = arr[i];
        }
    }
    cout<<x;
}