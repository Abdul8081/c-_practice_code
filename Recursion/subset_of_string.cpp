#include<iostream>
using namespace std;
void f(string ans, string str){
    if(str == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    f(ans+ch, str.substr(1));
    f(ans, str.substr(1));
}
int main(){
    //subset of the string
    string str = "abc";
    f("",str);
}