#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;

    for(int i=1;i<=n;i++){
        // for the space
        for(int j=1;j<i;j++) cout<<" ";
        //putting the star elemnt 
        for(int k=1;k<=n+1-i;k++) cout<<"* ";
        cout<<endl;
    }cout<<endl;

    for(int i=1;i<=n;i++){
        // for the space
        for(int j=1;j<i;j++) cout<<"  ";
        //putting the star elemnt 
        for(int k=1;k<=2*(n-i)+1;k++) cout<<"* ";
        cout<<endl;
    }cout<<endl;
}