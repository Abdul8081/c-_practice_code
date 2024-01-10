#include<iostream>
#include<vector>
#include<climits>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){//it means, taking input string temp from the ss
        v.push_back(temp);
    }
    int mx = INT_MIN;
    for(int i=0;i<v.size()-1;i++){
        int count = 1;
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]) count++;
        }
        mx = max(mx, count);
    }

    for(int i=0;i<v.size()-1;i++){
        int count = 1;
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]) count++;
        }
        if(count==mx){
            cout<<v[i]<<" "<<mx<<endl;
        }
    }
}