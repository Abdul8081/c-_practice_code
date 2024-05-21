#include<iostream>
#include<vector>
using namespace std;
int main(){
    //it can bw used in the specific provlwm only
    vector<int> v = {5, 4, 1, 3, 2};
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

    //cyclic sort
    int i =0;
    while(i<v.size()){
        int correct_idx  = v[i] - 1;
        if(i==correct_idx) i++;
        else swap(v[correct_idx], v[i]);
    }

    for(int i=0;i<v.size(); i++) cout<<v[i]<<" ";
}