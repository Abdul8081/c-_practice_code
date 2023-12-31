#include<iostream>
using namespace std;
int main(){
    // 5
    // 1 
    // 0 1 
    // 1 0 1 
    // 0 1 0 1 
    // 1 0 1 0 1 
    int n; cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j or (i%2==0 && j%2==0) or (i%2!=0 && j%2!=0)) cout<<1<<" ";
            else cout<<0<<" ";
            
        }
        cout<<endl;
    }
}