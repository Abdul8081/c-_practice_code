#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    vector<vector<int> >arr(m, vector<int> (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }cout<<endl;

    //printing in the wave form column wave
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j%2==0) cout<<arr[i][j]<<" ";
            else{
                cout<<arr[m-1-i][j]<<" ";
            }
        }cout<<endl;
    }
    
}