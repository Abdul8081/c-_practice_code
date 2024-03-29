#include<iostream>
#define vi vector<int>
#include<vector>
using namespace std;
void f(int n){
    if(n==0) return;
    vi ans;
    int x = n%2;
    ans.push_back(x);
    f(n/2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n = 10;
    f(n);
}