#include<iostream>
#include<vector>
using namespace std;
void f(string ans, string str, vector<vector<string>> &anss){
    if(str==""){
        anss.push_back({ans});
        return;
    }
    for(int i=0; i<str.length();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        f(ans+ch,(left+right), anss);
    }
}
int main(){
    string str = "abc";
    vector<vector<string>> anss;
    
    f("", str, anss);
    for(int i=0;i<anss.size(); i++){
        for(int j=0;j<anss[i].size();j++){
            cout<<anss[i][j];
        }
        cout<<endl;
    }
}
