#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n; cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }


    int p,q; cin>>p>>q;
    int arr2[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>arr2[i][j];
        }
    }

    if(p!=n){
        cout<<-1;
    }
    cout<<endl;

    // multiplication
    int mul[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            mul[i][j] = 0;
            for(int k=0;k<n;k++){
                mul[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
}