#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        // mading transpose of the matrix
        for(int i=0; i<m;i++){
            for(int j=i+1; j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        // reversing each row
        for(int i=0; i<m; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
        
    }
};