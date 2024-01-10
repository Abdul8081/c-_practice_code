#include<iostream>
using namespace std;
string reverse(string s){
    int n = s.length();
    int i=0;
    int j = n-1;
    while(i<j){
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    string rev = reverse(s);
    cout<<s+rev<<endl;
    
}