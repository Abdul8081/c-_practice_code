#include<iostream>
using namespace std;
void f(int n, int i){
    if(i>n) return;
    cout<<i<<" ";
    f(n, i+1);
}
int main(){
    int n; cin>>n;
    f(n, 1);

}