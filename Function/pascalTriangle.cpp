#include<iostream>
using namespace std;
int f(int n){
    int ans = 1;
    while(n>0){
        ans*=n;
        n--;
    }
    return ans;
}
int nCr(int i, int j){
    return (f(i)/(f(j)*f(i-j)));
}
int main(){

    // 5
    //      1 
    //     1 1 
    //    1 2 1 
    //   1 3 3 1 
    //  1 4 6 4 1
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int m=0;m<=i;m++) cout<<nCr(i,m)<<" ";
        cout<<endl;
    }
}