#include<iostream>
using namespace std;
void f(string ans, int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    f(ans+'0', n-1);
    if(ans=="" or ans[ans.length()-1]=='0') f(ans+'1', n-1);
}
int main(){
    //generate all binary string removing 1consecutive
    int n = 4;
    f("", n);
}