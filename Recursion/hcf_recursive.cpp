#include<iostream>
using namespace std;
int f(int a, int b){
    if(a==0) return b;
    return f(b%a, a);
}
int main(){
    int a = 20, b = 5;
    cout<<f(a,b);
}