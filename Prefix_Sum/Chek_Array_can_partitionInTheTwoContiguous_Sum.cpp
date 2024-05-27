#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;
    bool flag = false;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    //cheking the x can be found or not 
    for(int i=0;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"Yes, can be partioned, about : "<<idx;
    else cout<<"No, can't be Partitioned !)";

}