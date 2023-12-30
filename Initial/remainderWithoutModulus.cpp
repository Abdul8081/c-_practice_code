#include<iostream>
using namespace std;
int main(){
    // int divisor,dividend;
    // cin>>divisor>>dividend;
    // int q = divisor/dividend;
    // // b*q+rem = a;
    // int rem = divisor-(dividend*q);
    // cout<<rem<<" ";
    // int a=45; int b=20;
    // int q = a/b;
    // cout<<a-(q*b)<<endl;
    
    // int a = 10,b=15;
    // cout<<abs(a-b)<<endl;.
    char c;
    cin>>c;
    if((c<='z' and c>='a') or (c<='Z' and c>='A')){
        cout<<"alphabet"<<endl;
        if((c=='a'|| c=='e' || c=='i'|| c=='o'|| c=='u') or (c=='A' || c=='E' or c=='I' or c=='O' or c=='U')){
            cout<<"Vowels";
        }else{
            cout<<"Consonant";
        }
    }


}