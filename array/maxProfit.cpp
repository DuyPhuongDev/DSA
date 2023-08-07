#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    /*  Time Limit Exceeded
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if((prices[j]-prices[i])>profit) profit = (prices[j]-prices[i]);
            }
        }
        return profit;
    }   */
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
};
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    Solution result;
    cout<<result.maxProfit(prices);
    return 0;
}