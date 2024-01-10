#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
void reverse(string &s){
    int n = s.length();
    for(int i=0;i<n/2;i++){
        int temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    // cout<<s;
}
int main(){
    string s;
    getline(cin,s);
    stringstream obj(s);
    string temp;
    while(obj>>temp){
        reverse(temp);
        cout<<temp<<" ";
    }

}