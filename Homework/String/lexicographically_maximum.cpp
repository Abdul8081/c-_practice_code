#include<iostream>
#include<vector>
#include<climits>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    int x = INT_MIN;
    for(int i=0;i<v.size();i++){
        int ascii  = v[i][0]-97;
        x = max(x,ascii);
    }

    for(int i=0;i<v.size();i++){
        int ascii  = v[i][0]-97;
        if(ascii == x){
            cout<<v[i]<<endl;
            break;
        }
    }


}