#include<iostream>
using namespace std;
bool find(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target) return true;
    }
    return false;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x; cin>>x;
    cout<<find(a,x,n);
}