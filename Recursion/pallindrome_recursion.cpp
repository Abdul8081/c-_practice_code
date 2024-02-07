#include<iostream>
using namespace std;
bool f(string s, int i, int j){
    if(i>=j) return true;
    if(s[i]!=s[j]) return false;
    return f(s, i+1, j-1);
}
int main(){
    string s = "racecar";
    int n = s.length();
    cout<<f(s,0,n-1);
}