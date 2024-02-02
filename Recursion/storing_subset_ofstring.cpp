#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string ans, string str,vector<string> &v){
    //base case
    if(str==""){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    f(ans+ch, str.substr(1),v);
    f(ans, str.substr(1),v);
}
int main(){
    //strorin in 2d array and then printing the value
    string ans = "";
    vector<string> v;
    string str = "abc";
    f(ans,str,v);
    vector<vector<string>> v2;

    for(int i=0;i<v.size();i++){
        v2.push_back({v[i]});
    }

    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v2[0].size();j++){
            cout<<v2[i][j]<<endl;
        }
    }
}