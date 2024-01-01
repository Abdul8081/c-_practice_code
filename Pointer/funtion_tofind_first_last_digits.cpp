#include<iostream>
using namespace std;
void f(int n){
    int lastDigit = n%10;
    int firstDigit = 0;
    while(n>0){
        firstDigit = n%10;
        n/=10;
    }
    cout<<firstDigit<<" "<<lastDigit<<" "<<endl;
}
int main(){
    int n; cin>>n;
    f(n);
}