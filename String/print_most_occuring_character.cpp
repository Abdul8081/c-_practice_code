#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    string str = "aaabbbcccdddeeerrrffggghhh";
    vector<int> v;
    int ans = INT_MIN;
    for(int i=0;i<str.length()-1;i++){
        int count = 1;
        char ch = str[i];
        for(int j=i+1; j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        ans = max(ans, count);
    }
    
    //printing the character
    for(int i=0;i<str.length()-1;i++){
        int count = 1;
        char ch = str[i];
        for(int j=i+1; j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(count==ans) cout<<ch<<" "<<ans<<endl;
    }
}