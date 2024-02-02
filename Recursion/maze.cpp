#include<bits/stdc++.h>
using namespace std;
int f(int sr, int sc, int er, int ec){
    if(sr>er or sc>ec) return 0;
    if(sr==er and (sc == ec)) return 1;
    int right_tr = f(sr, sc+1, er, ec);
    int down_tr = f(sr+1, sc, er, ec);
    return right_tr + down_tr;
}
int main(){
    cout<<f(1,1,3,3);
}