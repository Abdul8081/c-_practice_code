#include<iostream>
using namespace std;
void f(int sr, int sc, int er, int ec, string s){
    if(sr>er or sc>ec) return;
    if(sr == er and sc == ec){
        cout<<s<<endl;
    }
    f(sr,sc+1,er,ec,s+'R');
    f(sr+1,sc,er,ec,s+'D');
}
int main(){
    f(1,1,3,3,"");
}