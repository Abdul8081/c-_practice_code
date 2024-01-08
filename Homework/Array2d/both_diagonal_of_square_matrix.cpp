#include<iostream>
using namespace std;
void f(int m, int n, int *arr){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>*((arr + i*n) + j);
        }
    }
    //display both diagonl
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j or i+j==n-1) cout<<*((arr + i*n) + j)<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n; cin>>m>>n;
    int arr[m][n];
    f(m,n,*arr);
}