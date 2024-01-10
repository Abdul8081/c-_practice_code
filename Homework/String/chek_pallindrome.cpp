#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    int i=0;
    int j=n-1;
    bool flag = true;
    while(i<j){
        if(s[i++]!=s[j--]){
            flag = false;
            break;
        } 
    }
    if(flag==false) cout<<"not-pallindrome";
    else cout<<"pallindrome";
}