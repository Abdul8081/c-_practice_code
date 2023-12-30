#include<iostream>
using namespace std;
int main(){
    // int a=1;int b=1;
    // int n;
    // cin>>n;
    // cout<<a<<endl<<b<<endl;
    // while(n>2){
    //     int c = a+b;
    //     cout<<c<<endl;
    //     a=b;
    //     b=c;
    //     n--;
    // }

    /*Nth fibonqacci number*/
    int n;cin>>n;
    int a=1,b=1,count=2;
    int s=n;
    while(n>1){
        int c = a+b;
        count++;
        if(count==s){
            cout<<c<<endl;
            break;
        }
        a=b;
        b=c;
        n--;
    }

}