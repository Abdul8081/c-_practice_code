#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int h = n-1;
    int ans = -1;
    while(l<=h){
        int m = l+(h-l)/2;
        if(arr[m]==m) l = m+1;
        else{
            ans = m;
            h = m-1;
        }
    }
    cout<<ans;
}