#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 9, 11};
    int n = 7; int x = 6;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<"lower bound : "<<arr[i-1]<<endl;
    //         cout<<"upper bound : "<<arr[i];
    //         break;
    //     }
    // }

    //by binary search
    int l = 0;
    int h = n-1;
    bool flag = 0;
    int idx = -1;
    int m = 0;
    while(l<=h){
        m = l+(h-l)/2;
        if(arr[m]==x){
            cout<<"lb : "<<arr[m-1]<<endl;
            cout<<"ub : "<<arr[m+1]<<endl;
            break;
        }
        else if(arr[m]<x) l = m+1;
        else h = m-1;
    }
    if(arr[m]!=x){
        cout<<"l.b : "<<arr[h]<<endl;
        cout<<"u.b : "<<arr[h+1];
    }

}