#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int ans = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ans = max(ans, arr[i][j]);
        }
    }
   cout<<ans;
}