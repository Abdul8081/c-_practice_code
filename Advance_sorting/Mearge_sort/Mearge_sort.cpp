#include<iostream>
#include<vector>
using namespace std;
void mearge(vector<int> &a, vector<int> &b, vector<int> &arr){
    int i = 0, j = 0, k = 0;
    int n1 = a.size();
    int n2 = b.size();
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
}
void meargeSort(vector<int> &arr){
    int n = arr.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;

    vector<int> a(n1), b(n2);

    for(int i=0;i<n1; i++) a[i] = arr[i];
    for(int i=0;i<n2; i++) b[i] = arr[i+n1];
    
    meargeSort(a);
    meargeSort(b);

    mearge(a, b, arr);
    a.clear();
    b.clear();
}
int main(){
    vector<int> arr = {8, 7, 5, 0, 1, 3, 2, 9, 6};
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
    meargeSort(arr);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    
}