#include<iostream>
using namespace std;
void rem(string ans, string str){
    if(str.length()==0){
        cout<<ans;
        return;
    }
    char ch = str[0];
    if(ch=='a') rem(ans, str.substr(1));
    else rem(ans+ch, str.substr(1));
}
int main(){
    string str = "Abdul Muid is a Leetcoder";
    rem("", str);
}