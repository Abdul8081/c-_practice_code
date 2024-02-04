#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string ans, string str,vector<string> &v, bool flag){
    //base case
    if(str==""){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    if(str.length()==1){
        if(flag==true) f(ans+ch, str.substr(1),v, true);
        f(ans, str.substr(1),v, true);
        return;
    }
    char dh = str[1];
    if(ch==dh){
        if(flag==true) f(ans+ch, str.substr(1),v, true);
        f(ans, str.substr(1),v, false);
    }
    else{
        if(flag==true) f(ans+ch, str.substr(1),v, true);
        f(ans, str.substr(1),v, true);
    }
}
int main(){
    //strorin in 2d array and then printing the value
    string ans = "";
    vector<string> v;
    string str = "aab";
    f(ans,str,v, true);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}