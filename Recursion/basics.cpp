#include<iostream>
using namespace std;
void f(int n){
    if(n==1) return;
    cout<<"Hi, Abdul You are doing great "<<endl;;
    f(n-1);
}
int main(){
    int n; cin>>n;
    f(n);
}