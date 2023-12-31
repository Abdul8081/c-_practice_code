#include<iostream>
using namespace std;
void swapx(int a, int b){
    a = a-b;
    b = a+b;
    a = b-a;
    cout<<a<<" "<<b<<endl;
}
void swapXor(int a, int b){
    a^=b;
    b^=a;
    a^=b;
    cout<<a<<" "<<b<<endl;
}
void tempSwap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<" "<<endl;
}
int main(){
    int a,b; cin>>a>>b;
    tempSwap(a,b);
    swapx(a,b);
    swapXor(a,b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}