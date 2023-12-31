#include<iostream>
#include<vector>
using namespace std;
int hcf(int a,int b){
    int ans = 1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 and b%i==0){
            ans = i;
            break;
        }
    }
    return ans;
}
vector<vector<int> >arr(10000+5,vector<int> (10000+5,-1));
int i=0;
int j=0;
int recursion_gcd(int a, int b){
    if(a%b == 0) if(arr[i][j]!=-1) return arr[i][j];
    return arr[i][j]=(a,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    // int ans = 1;
    // for(int i=1;i<min(a,b);i++){
    //     if(a%i==0 and b%i==0) ans = i;
    // }
    // cout<<ans;
    // cout<<hcf(a,b);
    cout<<recursion_gcd(max(a,b),min(a,b));
}