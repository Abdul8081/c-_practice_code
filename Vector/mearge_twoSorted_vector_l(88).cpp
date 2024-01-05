#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){

}
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*My method*/

        // stack<int> st, gt;
        // for(int i=0; i<m; i++){
        //     st.push(nums1[i]);
        // }
        // for(int i=0; i<n; i++){
        //     gt.push(nums2[i]);
        // }
        // nums1.clear();
        // while(st.size() and gt.size()){
        //     if(st.top()<=gt.top()){
        //         nums1.push_back(st.top());
        //         st.pop();
        //     }
        //     else{
        //         nums1.push_back(gt.top());
        //         gt.pop();
        //     }
        // }
        // if(st.size()==0){
        //     while(gt.size()){
        //         nums1.push_back(gt.top());
        //         gt.pop();
        //     }
        // }

        // if(gt.size()==0){
        //     while(st.size()){
        //         nums1.push_back(st.top());
        //         st.pop();
        //     }
        // }
        // sort(nums1.begin(),nums1.end());

        /*More optimised one*/
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else  nums1[k--] = nums2[j--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};