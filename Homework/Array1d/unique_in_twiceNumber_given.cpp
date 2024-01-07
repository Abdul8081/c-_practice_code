#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[7] = {2,2,1,3,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // unordered_map<int,int> mp;
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    // for(auto x : mp){
    //     int fr = x.second;
    //     if(fr==1){
    //         cout<<x.first;
    //         break;
    //     }
    // }

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if( i!=j and arr[i]==arr[j]) count++;
        }
        if(count==0){
            cout<<arr[i];
            break;
        }
    }
    
}