#include<iostream>
using namespace std;
void f(string ans, string str){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length(); i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        f(ans+ch, (left+right));
    }
}
int main(){
    string str = "abc";
    f("", str);
}