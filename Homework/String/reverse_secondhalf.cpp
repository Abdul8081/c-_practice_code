#include<iostream>
#include<sstream>
using namespace std;
string reverse(string s){
    int n = s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    string start = s.substr(0,n/2);
    string rev = reverse(s.substr(n/2));
    cout<<(start+rev);
}