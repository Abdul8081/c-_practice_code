#include<iostream>
using namespace std;
void f(string s, int o, int c, int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n) f(s+'(', o+1, c, n);
    if(c<o) f(s+')', o, c+1, n);
}
int main(){
    int n = 5;
    f("", 0, 0, n);

}