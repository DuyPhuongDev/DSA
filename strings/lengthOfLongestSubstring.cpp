#include<iostream>
#include<string>
#include<set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int cur_max;
        set<char> a;
        int left =0;
        for(int right = 0; right<s.length();right++){
            if(!a.count(s[right])){
                a.insert(s[right]);
                cur_max = right - left + 1;
                if(cur_max > max) max = cur_max;
            }else{
                while(a.count(s[right])){
                    a.erase(s[left]);
                    left++;
                }
                a.insert(s[right]);
            }
        }
        return max;
    }
};

int main(){
    string s="pwwkew";
    Solution result;
    cout<<result.lengthOfLongestSubstring(s);
    return 0;
}
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int cur_max = 0;
        set<char> a;
        char* left = &s[0];
        char* right = left;
        while(*left != '\0'){
            if(cur_max>max){
                max = cur_max;
                cur_max = 1;
            }
            if((a.empty() || !a.count(*right)) && *right !='\0'){
                a.insert(*right);
                cur_max++;
                right++;
            }else if(a.count(*right) && *right!='\0'){
                a.erase(*right);
                a.insert(*right);
                left++;
                right = left;
            }else left++;
        }
        return max;
    }
}; */