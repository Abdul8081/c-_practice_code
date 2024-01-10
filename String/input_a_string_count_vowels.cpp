#include<iostream>
using namespace std;
int main(){
    int count = 0;
    string s; getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') count++;
    }
    cout<<count;
}