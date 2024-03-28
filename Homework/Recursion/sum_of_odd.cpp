#include<iostream>
using namespace std;
int f(int a, int b, int sum){
    if(a>b){
        return sum;
    }
    a = min(a,b);
    b = max(a,b);
    if(a%2!=0){
        sum+=a;
        f(a+1, b, sum);
    }else{
        f(a+1, b, sum);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum = 0;
    for(int i=min(a,b);i<=max(a,b);i++){
        if(i%2!=0) sum+=i;
    }
    cout<<sum<<endl;
    cout<<f(a, b, 0);
}