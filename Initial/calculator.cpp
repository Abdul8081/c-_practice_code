#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a>>b>>ch;
    if(ch=='+') cout<<a+b;
    else if(ch=='-') cout<<a-b;
    else if(ch=='*') cout<<a*b;
    else if(ch=='/') cout<<a/b;
    else if(ch=='%') cout<<a%b;
    else cout<<"Plese input arithmatic character";
}