#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    int mx = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            mx = max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}