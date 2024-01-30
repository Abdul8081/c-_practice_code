#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,0,1,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int flag = 1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]>arr[j]){
                swap(arr[j+1], arr[j]);
                flag = 0;
            }
        }
        if(flag == 1) break;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}