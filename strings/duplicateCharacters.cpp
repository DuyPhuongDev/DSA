#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        for(int i=0;i<A.length();i++){
            if(tolower(A[i])==tolower(B[i])) count++;
        }
        return count;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}