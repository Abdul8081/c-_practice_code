#include<iostream>
using namespace std;
int main(){
    string str = "abcd";
    int n = str.length();
    // for(int i=0;i<str.length();i++){
    //     cout<<str.substr(n-1-i)<<endl;
    // }

    //printing the second half
    cout<<str.substr(n/2);

}