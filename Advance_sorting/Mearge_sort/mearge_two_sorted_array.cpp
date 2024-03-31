#include<iostream>
using namespace std;
int main(){
    int arr1[] = {-1, 2, 5, 6, 8, 7, 9};
    int n1 = sizeof(arr1)/4;
    for(int i=0;i<n1; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    int arr2[] = {-3, 4, 10};
    int n2 = sizeof(arr2)/4;
    for(int i=0;i<n2; i++) cout<<arr2[i]<<" ";
    cout<<endl;

    int i = 0;
    int j = 0;

    int k = 0;
    int ans[n1+n2];
    
    //mearging two sorted array
    while(i<n1 and j<n2){
        if(arr1[i]<=arr2[j]){
            ans[k++] = arr1[i++];
        }
        else if(arr2[j]<arr1[i]){
            ans[k++] = arr2[j++];
        }
    }

    if(i==n1){
        while(j<n2){
            ans[k++] = arr2[j++];
        }
    }

    if(j==n2){
        while(i<n1){
            ans[k++] = arr1[i++];
        }
    }

    for(int i=0;i<n1+n2; i++) cout<<ans[i]<<" ";

}