#include<iostream>
using namespace std;
void print(int arr[], int n,int idx){
    if(idx>=n) return;
    cout<<arr[idx]<<" ";
    return print(arr, n, idx+1);
}
int main(){
    int arr[] = {7,8,9,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n, 0);
}