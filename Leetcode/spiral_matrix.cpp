#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m = matrix.size();
        int n = matrix[0].size();
        int minr = 0;
        int minc = 0;
        int maxr = m-1;
        int maxc  = n-1;
        int count = 0;
        while((minr<=maxr) and (minc<=maxc) and (count<=m*n)){
            //left filling
            for(int i=minr; i<=maxc and (count<m*n) ;i++){
                v.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            //top to bottoom
            for(int i=minr;i<=maxr and (count<m*n);i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            //bottom right to bottom left
            for(int i=maxc;i>=minc and (count<m*n);i--){
                v.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            //bottom to top
            for(int i=maxr; i>=minr and (count<m*n);i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};