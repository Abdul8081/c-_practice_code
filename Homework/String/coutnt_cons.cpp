#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u') count++;
    }
    cout<<count;
}