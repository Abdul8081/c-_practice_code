#include<iostream>
using namespace std;
int main(){
    //input a string as the integer of size less than 10
    // print out the integer without using the inbuilt function
    //"1234"
    //1234
    string s;
    getline(cin,s);
    int val = 0;
    int pw = 1;
    while(s.size()){
        val += pw*(s.back()-'0');
        s.pop_back();
        pw*=10;
    }
    cout<<val;
}