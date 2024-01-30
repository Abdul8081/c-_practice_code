#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "azerzsmghzchsihdfisdfhsefg";
    int n = str.length();
    //sorting by bubble sort
    for(int i=0;i<n;i++){
        bool flag = 0;
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j], str[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
    cout<<str;

}