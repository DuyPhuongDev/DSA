#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool result=0;
        for(auto i = s.begin();i!=s.end();i++){
            char c = *i;
            if(st.empty()||c=='{'||c=='['||c=='('){
                st.push(c);
            }else{
                if(c==')' && st.top()=='(') result =1;
                else if(c==']' && st.top()=='[') result =1;
                else if(c=='}' && st.top()=='{') result =1;
                else return 0;
                st.pop();
            }
        }
        if(!st.empty()) result=0;
        return result;
    }
};
int main(){
    string s="({{{{}}}))";
    Solution result;
    cout<<result.isValid(s);
    return 0;
}