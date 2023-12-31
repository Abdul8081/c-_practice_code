#include<iostream>
using namespace std;
void swaps(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    int *p1 = &a;
    int *p2 = &b;
    swaps(&a,&b);
    cout<<a<<" "<<b<<endl;
}