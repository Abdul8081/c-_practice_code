#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> v;
    while(s.size()){
        v.push_back(s.back()-'0');
        s.pop_back();
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max1){
            max2 = max1;
            max1 = v[i];
        }
        if(v[i]>max2 and v[i]!=max1){
            max2 = v[i];
        }
    }
    cout<<max2;
}