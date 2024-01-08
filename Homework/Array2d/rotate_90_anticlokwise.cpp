#include<iostream>
using namespace std;
void rotate90anti(int *arr,int m, int n){
    int temp[m][n];
    //transpose
    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            temp[i][j] = *((arr +i*m)+j);
        }
    }
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<m;i++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    rotate90anti(*arr,m,n);
}