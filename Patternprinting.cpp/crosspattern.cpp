#include<iostream>
using namespace std;
void normalcrosspattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1 or j==n/2+1) cout<<"* ";
            else cout<<"  ";
        }cout<<endl;
    }
}

void corresdpattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==j) or (i+j==n+1) ) cout<<"* ";
            else cout<<"  ";
        }cout<<endl;
    }
}
int main(){


    // 5
    //     *     
    //     *     
    // * * * * * 
    //     *     
    //     *  
   
    // *       * 
    //   *   *   
    //     *     
    //   *   *   
    // *       * 

    int n; cin>>n;
    // n always odd
    normalcrosspattern(n);
    corresdpattern(n);
}