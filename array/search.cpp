#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int find_min_index(vector<int> nums){
        int left = 0;
        int right = nums.size()-1;
        while(nums[left]>nums[right]){
            int mid = left + (left+right)/2;
            if(nums[mid]>nums[right]){
                left =  mid + 1;
            }else right = mid;
        }
        return left;
    }
    /*
    // đệ quy cho tới chết :))
    int searching(vector<int> nums,int target, int left, int right){
        if(right>=1){
            int mid = left + (right - left)/2;
            if(nums[mid]==target) return mid;
            if(target < nums[mid]) return searching(nums,target,left,mid-1);
            return searching(nums,target,mid+1,right);
        }
        return -1;
    }
    */
   int searching(vector<int> nums, int target, int left, int right){
        while(left<right){
            int mid = left + (right - left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) left = mid;
            else right = mid;
        }
        return -1;
   }
    int search(vector<int>& nums, int target) {
       int left = 0, right = nums.size()-1;
       if(find_min_index(nums)>0){
            if(nums[left]<=target && nums[find_min_index(nums)-1]>=target){
                return searching(nums,target,left,find_min_index(nums)-1);
            }else if(nums[right]>=target && nums[find_min_index(nums)]<=target){
                return searching(nums,target,find_min_index(nums),right);
            }
       }
       return searching(nums,target,left,right);
    }
};
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 4;
    Solution result;
    cout<<result.search(nums,target);
    return 0;
}