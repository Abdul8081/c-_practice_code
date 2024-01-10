#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    string s = "aaaabbbbcc";
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = int(ch);
        v[ascii-97]++;
    }
    int mx = 0;
    for(int i=0;i<26;i++){
        if(mx<v[i]){
            mx = v[i];
        }
    }
    for(int i=0;i<26;i++){
        if(v[i]==mx){
           int ascii = i+97;
           cout<<char(ascii)<<" "<<mx<<endl;
        }
        
    }
}