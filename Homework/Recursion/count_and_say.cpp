#include<iostream>
#include<vector>
using namespace std;
string f(int n, string ans){
    if(n==1) return "1";
    string str = f(n-1, ans);
    int freq = 1;
    char ch = str[0];
    for(int i=1; i<str.length(); i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ans+=(to_string(freq)+ch);
            freq = 1;
            ch = dh;
        }
    }
    ans+=(to_string(freq)+ch);
    return ans;
}
int main(){
   cout<<f(4, "");
}