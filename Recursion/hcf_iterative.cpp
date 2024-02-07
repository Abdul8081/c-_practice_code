#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10;
    bool flag = 1;
    for(int i= min(a,b); i>=2; i--){
        if(a%i==0 and b%i==0){
            cout<<i<<endl;
            flag = 0;
            break;
        } 
    }
    if(flag == 1) cout<<1;
}