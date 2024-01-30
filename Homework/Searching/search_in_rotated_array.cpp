#include<iostream>
#include<vector>
using namespace std;
int main(){
    
}
class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n = nums.size();
        int pdx = -1;
        int lo = 0;
        int hi = n-1;
        if(n==2){
            if(nums[0]==x) return 0;
            else if(nums[1]==x) return 1;
            else return -1;
        }
        if(n==1){
            if(nums[0]==x) return 0;
            else return -1;
        }
        //finding of pdx (pivot index)
        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(mid == 0) lo = mid+1;
            else if(mid == n-1) hi = mid-1;
            else if(nums[mid]>nums[mid+1] and (nums[mid]>nums[mid-1])){
                pdx = mid + 1;
                break;
            }
            else if(nums[mid]<nums[mid+1] and (nums[mid]<nums[mid-1])){
                pdx = mid;
                break;
            }
            else if(nums[mid]>nums[hi]) lo = mid + 1;
            else hi = mid-1;
        }
        
        if(pdx == -1){
            lo = 0;
            hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi - lo)/2;
                if(nums[mid]==x) return mid;
                else if(nums[mid]<x) lo = mid + 1;
                else hi = mid-1;
            }
            return -1;
        }
        if(x>=nums[0] and (x<=nums[pdx-1])){
            lo = 0;
            hi = pdx-1;
            while(lo<=hi){
                int mid = lo + (hi - lo)/2;
                if(nums[mid]==x) return mid;
                else if(nums[mid]<x) lo = mid + 1;
                else hi = mid-1;
            }
        }
        else {
            lo = pdx;
            hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi - lo)/2;
                if(nums[mid]==x) return mid;
                else if(nums[mid]<x) lo = mid + 1;
                else hi = mid-1;
            }
        }
        return -1;
    }
};