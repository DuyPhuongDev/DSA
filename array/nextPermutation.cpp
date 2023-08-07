#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool check_nums_max(vector<int> nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) return false;
        }
        return true;
    }
    void Swap(int &a, int&b){
        int temp=a;
        a=b;
        b=temp;
    }
    void nextPermutation(vector<int>& nums) {
        if(check_nums_max(nums)) sort(nums.begin(), nums.end());
        else{
            int idx, min = 100;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i-1]<nums[i]){
                    idx = i-1;
                    break;
                }
            }
            for(int i=idx+1;i<nums.size();i++){
                if(nums[i]<min && nums[i]>nums[idx]) min = nums[i];
            }
            for(int i=idx+1;i<nums.size();i++){
                if(nums[i]==min){
                    Swap(nums[idx], nums[i]);
                    break;
                }
            }
            for(int i= idx+1;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]<nums[i]) Swap(nums[i], nums[j]);
                }
            }
        }
    }
    /* VIP
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
    */
};

int main(){
    vector<int> nums = {2,3,1};
    Solution result;
    result.nextPermutation(nums);
    //result.Swap(nums[0], nums[4]);
    for(auto x:nums){
        cout<<x<<" ";
    }
    return 0;
}