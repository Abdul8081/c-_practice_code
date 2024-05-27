#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4};
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    //prefix product;
    int n = v.size();
    vector<int> prefixProd(n), suffixProd(n);

    //prefix product creation
    int p = v[0];
    prefixProd[0] = 1;
    for(int i=1;i<n;i++){
        prefixProd[i] = p;
        p*=v[i];
    }

    for(int i=0;i<n;i++) cout<<prefixProd[i]<<" ";
    cout<<endl;

    //suffix product 
    p = v[n-1];
    suffixProd[n-1] = 1;
    for(int i = n-2;i>=0;i--){
        suffixProd[i] = p;
        p*=v[i];
    }

     for(int i=0;i<n;i++) cout<<suffixProd[i]<<" ";

}