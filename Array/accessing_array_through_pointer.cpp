#include<iostream>
using namespace std;
bool find(int *arr,int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target) return true;
    }
    return false;
}
int main(){
    int n; cin>>n;
    int a[n];
    int *ptr = a;
    for(int i=0;i<n;i++) cin>>ptr[i];
    int x; cin>>x;
    cout<<find(ptr,x,n);
}