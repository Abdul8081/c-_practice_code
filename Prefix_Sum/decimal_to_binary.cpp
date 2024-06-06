#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> st;
    while(n){
        st.push_back(n%2);
        // n/=2;
        n = n>>1;
    }
    int m = st.size();
    for(int i=m-1;i>=0;i--){
        cout<<st[i];
    }
}