#include<iostream>
#include<vector>
using namespace std;
int first(vector<int> v, int x){
    int n = v.size();
    int l = 0;
    int h = n-1;
    int res = -1;
    while(l<=h){
        int m = l + (h-l)/2;
        if(v[m]>x) h = m-1;
        else if(v[m]<x) l = m+1;
        else{
            res = m;
            // reducing the sample sapce
            h = m-1;
        }
    }
    return res;
}
int main(){
    vector<int> v = {1,2,2,2,5,7,8,8,9,10,11,11,12};
    int x = 11;
    cout<<first(v,x);
}