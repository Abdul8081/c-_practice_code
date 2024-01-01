#include<iostream>
using namespace std;
void display(int *ptr,int size){
    for(int i=0;i<size;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;
    int a[n];
    int *ptr = a;
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    display(ptr,n);
    cout<<a[0]<<endl;
    // ptr=a;
    cout<<a[0]<<endl;
}