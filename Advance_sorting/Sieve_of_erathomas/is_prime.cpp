#include<iostream>
#include<math.h>
using namespace std;
bool f(int n){
    if(n==1) return false;
    int count = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) count++;
    }
    if(count==0) return true;
    else return false;
}
int main(){
    cout<< f(841);
}