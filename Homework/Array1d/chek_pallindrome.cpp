#include<iostream>
using namespace std;
bool chekPallindrome(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
int main(){
    int arr[] = {1,2,3,2,1};
    // int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<chekPallindrome(arr,n);
}