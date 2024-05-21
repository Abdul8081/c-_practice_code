#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
void Composite_number(int n){
    vector<int> ans;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ans.push_back(i);
            if(i*i!=n) ans.push_back(n/i);
        }
    } 
    sort(ans.begin(), ans.end());
    for(int i=0;i<ans.size(); i++) cout<<ans[i]<<" ";
}
int main(){
    Composite_number(60);
}