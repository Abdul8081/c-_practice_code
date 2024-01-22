#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //7 8 1 5 4
    //3 4 0 2 1
    //if array having negative element

    int x = 0;
    vector<int> v(n,0);
    //here 0 means vector is not cheked
    for(int i=0;i<n;i++){
        int mn = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
               if(arr[j]<mn){
                    mn = arr[j];
                    mindx = j;
                } 
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}