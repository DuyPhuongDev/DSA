#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s("");
        for(int i=0;i<strs[0].length();i++){
            if(i>=strs[strs.size()-1].length() || strs[0][i]!= strs[strs.size()-1][i]) break;
            else{
                s+=strs[0][i];
            }
        }
        return s;
    }
};
int main(){
    vector<string> strs = {"flower","flow","flight"};
    Solution result;
    cout<<result.longestCommonPrefix(strs)<<endl;
    return 0;
}