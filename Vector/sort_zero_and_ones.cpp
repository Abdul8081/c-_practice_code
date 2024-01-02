#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortZeroOne1(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){
        int noz = 0, noo = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0) noz++;
            else noo++;
        }
        for(int i=0;i<n;i++){
            if(i<noz) v[i] = 0;
            else v[i] = 1;
        }
    }
}
void sortZeroOne2(vector<int> &v){
    sort(v.begin(),v.end());
}
void sortZeroOne3(vector<int> &v){
    int n = v.size();
    int i=0; int j=n-1;
    while(i<=j){
        if(v[i]!=0 && v[j]!=1){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if(v[i]==0) i++;
        else if(v[j]==1) j--;
        // agr uper k else if wala 2 line is function k if() wale statement k pahle likhna hai to ye dono (else if) wale line likhne k baad hmme phrr se chek lagana padega ki agr (i>j) ho jaye to loop brreak kr de!!
    }
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    // sortZeroOne1(v);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }


    // sortZeroOne2(v);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    sortZeroOne3(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}