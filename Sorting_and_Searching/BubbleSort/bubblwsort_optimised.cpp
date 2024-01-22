#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // bubble sort
    // for(int i=0;i<n-1;i++){
    //     bool flag = 1;
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //             flag = 0;
    //         }
    //     }
    //     if(flag == 1) break;
    // }
    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    // selection sort
    for(int i=0;i<n-1;i++){
        int mn = INT_MAX;
        int mindx = -1;
        bool flag = 1;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
            // yaha prr sabse chhota element ko search ho rha hai
            // from i to n, phrr usko i wale element se replace kar denge
                mn = arr[j];
                mindx = j;
                flag = 0;
            }
        }if(flag == 1) break;
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}