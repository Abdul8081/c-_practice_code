#include<iostream>
#include<vector>
#define vi vector<int> 
using namespace std;

void merge(vi a, vi b, vi &v) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] >= b[j]) {
            v[k++] = a[i++];
        } else {
            v[k++] = b[j++];
        }
    }

    while (j < n2) {
        v[k++] = b[j++];
    }

    while (i < n1) {
        v[k++] = a[i++];
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();
    if(n<=1) return;

    int n1 = n/2;
    int n2 = n-n1;

    vector<int> a(n1), b(n2);
    for(int i=0;i<n1;i++) a[i] = v[i];

    for(int i=0;i<n2;i++) b[i] = v[i+n1];
    
    mergeSort(a);
    mergeSort(b);

    merge(a, b, v);
    // a.clear();
    // b.clear();

}
int main(){
    vector<int> v = {7, 8, 9, 4, 5, 1, 0, 3, 2, 6, 10};
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}