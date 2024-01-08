#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //forming the rectangle sum
    int arr1[4];
    for(int i=0;i<4;i++){
        cin>>arr1[i];
    }
    sort(arr1,arr1+4);
    int l1 = arr1[0];
    int r1 = arr1[1];
    int l2 = arr1[2];
    int r2 = arr1[3];
    int sum = 0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}