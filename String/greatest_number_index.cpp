#include<iostream>
#include<climits>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","901"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        int n = stoi(arr[i]);
        if(n>mx) mx = n;
    }

    string s = to_string(mx);
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            cout<<i;
            break;
        }
    }
}