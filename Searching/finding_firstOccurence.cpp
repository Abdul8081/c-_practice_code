#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,1,3,2,2,5,6,7,8,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sorting of the array
    for(int i=0;i<n-1;i++){
        int mn = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int l = 0;
    int h = n-1;
    int x = 2;
    bool flag = 0;
    while(l<=h){
        int m = l + (h-l)/2;
        if(arr[m]==x){
            if(arr[m-1]!=x){
                flag = 1;
                cout<<m;
                break;
            }
            else{
                h = m-1;
            }
        }
        else if(arr[m]<x) l = m+1;
        else h = m-1;
    }
    if(flag==0) cout<<-1;
}