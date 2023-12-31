#include<iostream>
using namespace std;
int main(){

    // 7
    //             * 
    //           * * 
    //         * * * 
    //       * * * * 
    //     * * * * * 
    //   * * * * * * 
    // * * * * * * * 
    
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int m=1;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}