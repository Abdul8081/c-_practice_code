#include<iostream>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }


    // mading transpose
    int arr2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           arr2[i][j] = arr[j][i];
        }
    }  

    // printing transpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }    
}