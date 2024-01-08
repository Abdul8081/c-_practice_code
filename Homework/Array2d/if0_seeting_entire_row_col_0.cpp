#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int> >arr){
    int m = arr.size();
    int n = arr[0].size();
    int idx = -1;
    int idx2 = -1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                idx = i;
                idx2 = j;
                break;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==idx or j==idx2) arr[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int m,n; cin>>m>>n;
    vector<vector<int> >arr(5,vector<int> (5,1));
    arr[2][2] = 0;
    change(arr);
    
}