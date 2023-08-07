#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    // chuỗi đối xứng
    string delete_symbol(string s){
        string news("");
        int length = s.length();
        for(int i=0;i<length;i++){
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || isdigit(s[i])) news+=tolower(s[i]);
        }
        return news;
    }
    bool isPalindrome(string s) {
        string s1 = delete_symbol(s);
        int st=0, e=s1.length()-1;
        if(s1.length()==0 || s1.length()==1) return true;
        while(st<e){
            if(s1[st]!=s1[e]) return false;
            st++;
            e--;
        }
        return true;
    }
};
int main(){
    string s = "0P";
    Solution result;
    cout<<result.isPalindrome(s);
    return 0;
}