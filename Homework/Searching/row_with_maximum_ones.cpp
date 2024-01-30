#include<iostream>
#include<climits>
using namespace std;
int idx = -1;
int main(){
    int arr[4][4] = {
    0, 1, 1, 1,
    0, 0, 1, 1,
    1, 1, 1, 1,  
    0, 0, 0, 0
    };
    // find out the row having maximum sum
    int x = 0;
    int idx = -1;
    for(int i=0; i<4; i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(count>x){
            x = count;
            idx = i;
        }
    }
    cout<<x<<" "<<idx<<endl;
}