#include<iostream>
#include<sstream>
#include<string>
using namespace std;
void reverse(string &s){
    int n = s.length();
    for(int i=0;i<n/2;i++){
        int temo = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temo;
    }
}
int main(){
    string s;
    getline(cin,s);

    stringstream obj(s);
    string temp;
    //keval temp print kar denege to yah uska eik eik value ko print kr dega 

    //aur agr usko reverse kr k print krna hai to usko function bana kr karna padega
    while(obj>>temp){
        reverse(temp);
        cout<<temp<<endl;
    }
}