#include<iostream>
#include<vector>
using namespace std;
void f(int n){
    if(n==0) return;
    vector<int> v;
    int x = n%10;
    if(x!=0) cout<<x<<" ";
    f(n/10);
}
int main(){
    // int n = 12345;
    int n = 123450;
    f(n);

}