#include<iostream>
using namespace std;
int f(int m, int n){
    if(m<1 or (n<1)) return 0;
    if(m==1 and (n==1)) return 1;
    return f(m, n-1) + f(m-1, n);
}
int main(){
    cout<<f(3,4);
}