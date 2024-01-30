#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,8,0,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        bool flag = 1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                flag = 0;
            }
        }
        if(flag == 1) break;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}