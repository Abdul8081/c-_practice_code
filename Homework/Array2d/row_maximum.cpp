#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> v(m);
    for(int i=0;i<m;i++){
        int row = 0;
        for(int j=0;j<n;j++){
            row += arr[i][j];
            v[i] = row;
        }
    }
    int idx = -1;
    int mx = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>mx){
            mx = v[i];
            idx = i;
        }
    }
    cout<<idx;
}