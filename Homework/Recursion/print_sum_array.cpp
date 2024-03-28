#include <bits/stdc++.h>
 using namespace std;
 void sumTriangle(vector<int> &arr, int n) {
    if(n == 0) return;
    vector<int> temp(n-1);
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if(i != 0) {
            temp[i-1] = arr[i-1] + arr[i];
        }
    }
    cout << endl;
    sumTriangle(temp, n-1);
    }
 int main() {
    vector<int> arr  = {7,8,9,5,6};
    sumTriangle(arr, 5);
 }