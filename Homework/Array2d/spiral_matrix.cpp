#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n; cin>>n;
    vector<vector<int> >arr(n,vector<int> (n,0));
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    int count = 1;
    while((minr<=maxr) and (minc<=maxc) and (count<=n*n)){
        //left->right 
        for(int i=minc;i<=maxc and (count<=n*n);i++){
            arr[minr][i] = count;
            count++;
        }
        minr++;
        //top->bottom
        for(int i=minr;i<=maxr and (count<=n*n);i++){
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
        //right->left
        for(int i=maxc;i>=minc and (count<=n*n);i--){
            arr[maxr][i] = count;
            count++;
        }
        maxr--;
        //bottom->top
        for(int i=maxr; i>=minr and (count<=n*n);i--){
            arr[i][minc] = count;
            count++;
        }
        minc++;
    }

    //printing of the spiral matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}