#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int temp = 0;
    while(n){
        temp = n;
        n = n & n-1;
    }
    cout<<2*temp;
}