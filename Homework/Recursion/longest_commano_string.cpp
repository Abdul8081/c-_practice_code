#include<iostream>
using namespace std;
int f(string &s1, string &s2, int i, int j){
    if(i==s1.length() or j==s2.size()) return 0;
    if(s1[i]==s2[j]){
        return 1 + f(s1, s2, i+1, j+1);
    }
    return max(f(s1, s2, i+1, j),f(s1, s2, i, j+1)); 

}
int main(){
    string s1 = "abcdefg";
    string s2 = "eh";
    cout<<f(s1, s2, 0, 0);
}