#include<iostream>
using namespace std;
void f(string s, string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string l = s.substr(0, i);
        string r = s.substr(i+1);
        f(l+r, ans+ch);
    }
}
int main(){
    string s = "abcd";
    f(s, "");
}