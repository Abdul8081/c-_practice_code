#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p1 = &a;
    // *p1++  ->this is not correct way of writing the codes
    (*p1)++;/*correct way of using increment operator with the pointer*/
    cout<<a<<" "<<*p1<<endl;

}