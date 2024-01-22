#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
string reversee(string s){
    int n = s.length();
    for(int i=0;i<n/2;i++){
        char c = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = c;
    }
    return s;
}
int main(){
    //sort an string after removal of element less than X
    string s;
    getline(cin,s);
    string str = "";
    for(int i=0;i<s.length();i++){
        if(s[i]<='Z' and s[i]>='X'){
            str+=s[i];
        }
    }
    // sort(str.begin(),str.end(),cmp);
    cout<<str<<endl;

    // bubble sort
    for(int i=0;i<str.length()-1;i++){
        bool flag = 1;
        for(int j=0;j<str.length()-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag = 0;
            }
        }
        if(flag == 1) break;
    }
    
    cout<<str<<endl;
    cout<<reversee(str);
    

}