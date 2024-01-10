#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    //finding the duplicate element
    // for(int i=0;i<n-1;i++){
    //     int mx = arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]==mx){
    //             cout<<mx;
    //             break;
    //         }
    //     }
    // }

    //we can do it by mading an bool array
    vector<bool> v(n+1,0);
    for(int i=0;i<n+1;i++){
        if(v[arr[i]]==1){
            cout<<arr[i];
            break;
        }
        else(v[arr[i]] = 1);
    }
}