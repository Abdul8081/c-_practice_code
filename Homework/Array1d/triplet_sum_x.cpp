#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+6);
    int tr; cin>>tr;

    //beakar approach
    // for(int i=0;i<n-2;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(arr[i]+arr[j]+arr[k]==tr){
    //                 cout<<"triplet : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    //                 break;
    //             }
    //         }
    //     }
    // }

    // using two pointer

    for(int i=0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        int target = tr-arr[i];
        while(l<r){
            if(arr[l]+arr[r]==target){
                cout<<"triplet : "<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                break;
            }
            else if(arr[l]+arr[r]<target) l++;
            else r--;
        }
    }

    // //using hashing

    // for(int i=0;i<n-2;i++){
    //     unordered_set<int> s;
    //     int rc = tr-arr[i];
    //     for(int j=i+1;j<n;j++){
    //         int rrc = rc-arr[j];
    //         if(s.find(rrc)!=s.end()){
    //             cout<<"triplet : "<<arr[i]<<" "<<arr[j]<<" "<<rrc<<endl;
    //             break;
    //         }
    //         s.insert(arr[j]);
    //     }
    // }
    
}