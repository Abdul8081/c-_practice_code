#include<iostream>
using namespace std;
int f(int n){
    //her time complaxity is O(n)
    //space complexity is also O(n);
    if(n==1 or n==2) return 1;
    return f(n-1) + f(n-2);
}
int f1(int n){
    int m = n;
    int a = 1,b = 1;
    int c = 0;
    while(m>2){
        c = a + b;
        a = b;
        b = c;
        m--;
    }
    return c;
}
int main(){
    int n; cin>>n;
    cout<<f(n);
    cout<<endl<<f1(n);
}