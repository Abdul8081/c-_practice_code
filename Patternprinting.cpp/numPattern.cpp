#include<iostream>
using namespace std;
int main(){

    // 5
    //         1 
    //       1 2 1 
    //     1 2 3 2 1 
    //   1 2 3 4 3 2 1 
    // 1 2 3 4 5 4 3 2 1 
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<"  ";
        for(int m=1;m<=i;m++) cout<<m<<" ";
        for(int m=1;m<i;m++) cout<<i-m<<" ";
        cout<<endl;
        
    }
}