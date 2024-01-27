#include<iostream>
#include<vector>
using namespace std;
int last(vector<int> v, int x){
    int n = v.size();
    int l = 0;
    int h = n-1;
    int res = -1;
    while(l<=h){
        int m = l + (h - l)/2;
        if(v[m]>x) h = m-1;
        else if(v[m]<x) l = m+1;
        else{
            res = m;
            //increasint the sample sapce
            l = m+1;
        }
    }
    return res;
}
int main(){
    vector<int> v = {1,2,2,2,3,4,4,5};
    int x = 4;
    cout<<last(v, x);
}