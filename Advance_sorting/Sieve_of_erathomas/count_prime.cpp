#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n = 100;
    int c = 0;
    for(int i=1;i<n;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    // cout<<c;
}