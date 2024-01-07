#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x = INT_MIN;
    int y = INT_MIN;
    int z = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            z = y;
            y = x;
            x = arr[i];
        }
        else if(arr[i]>y and arr[i]!=x){
            z = y;
            y = arr[i];
        }
        else if(arr[i]>z and arr[i]!=x and arr[i]!=y){
            z = arr[i];
        }
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
}