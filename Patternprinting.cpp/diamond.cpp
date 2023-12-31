#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;

        // 5
        //     *
        //    ***
        //   *****
        //  *******
        // *********
        //  *******
        //   *****
        //    ***
        //     *

        //     * 
        //    * * 
        //   * * * 
        //  * * * * 
        // * * * * * 
        //  * * * * 
        //   * * * 
        //    * * 
        //     * 

    //when we needed 1,3,5,7..'*' on each row
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;i<=n && j<=n-i;j++) cout<<" ";
        for(int k=1;i<=n && k<=2*i-1;k++) cout<<"*";
        for(int j=1;i>n && j<=i-n;j++) cout<<" ";
        for(int m=1;i>n && m<=2*(2*n-i)-1;m++) cout<<"*";
        cout<<endl;
    }
    cout<<endl;

    // for normal printing of the diamond pattern
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;i<=n && j<=n-i;j++) cout<<" ";
        for(int k=1;i<=n && k<=i;k++) cout<<"* ";
        for(int j=1;i>n && j<=i-n;j++) cout<<" ";
        for(int m=1;i>n && m<=(2*n-i);m++) cout<<"* ";
        cout<<endl;
    }

    
}