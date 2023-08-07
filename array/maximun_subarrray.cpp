#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //using kanade's algorithm
        int max = INT_MIN;
        int cur_sum = 0;
        for(int i=0;i<nums.size();i++){
            cur_sum+=nums[i];
            if(cur_sum>max) max= cur_sum;
            if(cur_sum<0) cur_sum=0;
        }
        return max;
    }
};
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution result;
    cout<<result.maxSubArray(nums);
    return 0;
}