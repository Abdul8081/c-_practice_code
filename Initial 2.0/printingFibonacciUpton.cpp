#include<iostream>
using namespace std;
void f(int n){
    // if(n==1 or n==2) return 1;
    // return f(n-2)+f(n-1);
    int a=1;int b=1;
    cout<<a<<endl<<b<<endl;
    while(n>2){
        int c = a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        n--;
    }
}
int main(){
    int n; cin>>n;
    f(n);
}