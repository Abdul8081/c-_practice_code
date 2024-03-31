#include<iostream>
#include<vector>
#define vi vector<int>
using namespace std;
int inversion(vi &a, vi &b){
    int count = 0;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    while(i<n1 and j<n2){
        if(a[i]>b[j]){
            count += n1-i;
            j++;
        }
        else i++;
    }
    return count;
}
void mearge(vi &a, vi &b, vi &v){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0, k = 0;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]) v[k++] = a[i++];
        else v[k++] = b[j++];
    }
    while(i<n1) v[k++] = a[i++];
    while(j<n2) v[k++] = b[j++];
}
int f(vi &v){
    int n = v.size();
    if(n==1) return 0;

    int count = 0;
    int n1 = n/2;
    int n2 = n-n1;

    vi a(n1);
    vi b(n2);

    for(int i=0;i<n1;i++) a[i] = v[i];
    for(int j=0;j<n2;j++) b[j] = v[j+n1];

    count += f(a);
    count +=f(b);

    count+= inversion(a, b);

    mearge(a, b, v);

    a.clear();
    b.clear();
    return count;
}
int main(){
    vector<int> v = {5, 1, 8, 2, 3};
    cout<<f(v);

}