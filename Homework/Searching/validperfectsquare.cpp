#include<iostream>
using namespace std;
bool checkSqrt(int x){
    int lo = 0;
    int hi = x;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(mid * mid == x) return true;
        else if((mid * mid)<x) lo = mid + 1;
        else hi = mid-1;
    }
    return false;
}
int main(){
    int x; cin>>x;
    cout<<checkSqrt(x)<<endl;
}