#include<iostream>
#include<algorithm>
// #include<cstring>
using namespace std;
int main(){
    // this will give error

    // char ch = '\';
    // cout<<ch;

    // char str[] = {'a','b','c','d','e','\0'};
    // cout<<str;
    
    // string str1 = {'a','b','c','d','e'};
    // cout<<str1;

    string s;
    cin>>s;
    // cout<<s;

    // string s;
    // getline(cin,s);
    // sort(s.begin(),s.end());
    // cout<<s;

    // string str = "abch";
    // char ch = 'a';
    // str.push_back('a');
    // cout<<str<<endl;

    reverse(s.begin(),s.end());
    cout<<s;








}