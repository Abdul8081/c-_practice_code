#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int prev[n];
        prev[0] = -1;
        int mx = height[0];
        for(int i=1; i<n; i++){
            prev[i] = mx;
            if(mx<height[i]) mx = height[i];
        }

        int next[n];
        next[n-1] = -1;
        mx = height[n-1];
        for(int i=n-2; i>=0; i--){
            next[i] = mx;
            if(mx<height[i]) mx = height[i];
        }


        for(int i=1; i<n; i++){
            prev[i] = min(prev[i],next[i]);
        }
        
        int water = 0;
        for(int i=0; i<n; i++){
            if(prev[i]>height[i]){
                water+= (prev[i]-height[i]);
            }
        }
        return water;
    }
};