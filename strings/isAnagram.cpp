#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    /* cách newbie => TLE
    void sort_string(string& s){
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(int(s[j])<int(s[i])) swap(s[i],s[j]);
            }
        }
    }
    bool isAnagram(string s, string t) {
        sort_string(s);
        sort_string(t);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(int(s[i])!=int(t[i])) return false;
        }
        return true;
    }*/
    bool isAnagram(string s, string t) {
        int s1[26]={0};
        int t1[26]={0};
        if(s.length()!=t.length()) return 0;
        for(int i=0;i<s.length();i++){
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(s1[i]!=t1[i]) return false;
        }
        return true;
    }
};
int main(){
    string s = "anagram", t = "nagaram";
    Solution result;
    cout<<result.isAnagram(s,t);
    return 0;
}