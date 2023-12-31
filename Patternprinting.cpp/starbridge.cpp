#include<iostream>
using namespace std;
int main(){

    // 10
    // * * * * * * * * * * * * * * * * * * * 
    // * * * * * * * * *   * * * * * * * * * 
    // * * * * * * * *       * * * * * * * * 
    // * * * * * * *           * * * * * * * 
    // * * * * * *               * * * * * * 
    // * * * * *                   * * * * * 
    // * * * *                       * * * * 
    // * * *                           * * * 
    // * *                               * * 
    int n; cin>>n;
    for(int i=1;i<=1;i++){
        for(int j=1;j<=2*n-1;j++){
            cout<<"* ";
        }
    }cout<<endl;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++) cout<<"* ";
        for(int m=1;m<=2*i-1;m++) cout<<"  ";
        for(int k=1;k<n-i+1;k++) cout<<"* ";
        cout<<endl;
    }
}