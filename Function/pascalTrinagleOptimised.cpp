#include<iostream>
using namespace std;

    // 5
    //      1 
    //     1 1 
    //    1 2 1 
    //   1 3 3 1 
    //  1 4 6 4 1 

void pascaltriangle(int n){
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int m=0;m<n-i;m++) cout<<" ";
        for(int j=0;j<=i;j++){
            if(i==j or j==0) arr[i][j] = 1;
            else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n; cin>>n;
    pascaltriangle(n);
}