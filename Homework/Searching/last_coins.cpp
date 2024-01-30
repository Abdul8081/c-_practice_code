#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int count = 0;
    int idx = -1;
    for(int i=0;i<n;i++){
        count += i;
        if(count>n){
            idx = i-1;
            break;
        }
    }
    cout<<idx;
}