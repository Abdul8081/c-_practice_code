#include<iostream>
#include<vector>
using namespace std;
void  decimal_to_binary(int n){
    vector<int> v;
    while(n){
        v.push_back(n%2);
        n = n>>1;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }cout<<endl;
}
int set_bit_n(int n){
    int x = n;
    int count = 0;
    while(n){
        count++;
        n = n & n-1;
    }
    return count;
}
int main(){
    /*This is the builtin method of finding the set bit*/
    // int n = 7;
    // cout<<(__builtin_popcount(n));



    /*Broin Kerlinglins Algorithms */
    //for each agjacent element there will be some identical part and 
    //some of them will be the reverse part
    //and by using this logic we are going to made an f
    // unction that will return the number of set bit for a given number
    int n; cin>>n;
    decimal_to_binary(n);
    cout<<set_bit_n(n);
}