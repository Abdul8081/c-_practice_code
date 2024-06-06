#include<iostream>
#include<cmath>
#include<vector>
using namespace std; 
int main(){
    string str; cin>>str;
    int n = str.length();
    int sum = 0; 
    for(int i=n-1;i>=0; i--){
        int x = str[i] - '0';
        sum += (x<<n-1-i);
    }
    cout<<sum;
}