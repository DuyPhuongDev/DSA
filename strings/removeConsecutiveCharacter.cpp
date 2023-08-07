#include<iostream>
#include<string>
using namespace std; 

class Solution{
public:
    string removeConsecutiveCharacter(string S){
        string s1("");
        for(int i=0;i<S.length();i++){
            if(s1=="" || S[i]!=S[i-1]) s1+=S[i];
        }
        return s1;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 
