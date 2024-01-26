#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = INT_MAX;
    int mx = INT_MIN;
    bool flag = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            mx = max(mx, (arr[i]+arr[i+1])/2);
        }
        else{
            mn = min(mn, (arr[i]+arr[i+1])/2);
        }
        if(mx>mn){
            flag = 1;
            break;
        }
    }
    (flag==1)?cout<<-1 : cout<<mx<<" "<<mn;
}