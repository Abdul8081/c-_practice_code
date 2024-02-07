#include<iostream>
using namespace std;
void generate(string str, int n){
    if(str.length()==n){
        cout<<str<<endl;
        return;
    }
    generate(str+'0', n);
    generate(str+'1', n);
}
int main(){
    int n = 1;
    generate("", n);
}