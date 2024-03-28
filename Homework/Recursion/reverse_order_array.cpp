#include<iostream>
using namespace std;
void f(int arr[], int n, int idx){
    if(idx==n) return;
    f(arr, n, idx+1);
    cout<<arr[idx]<<" ";

}
int main(){
    int arr[] = {1, 8, 6, 9, 5};
    f(arr, 5, 0);
}