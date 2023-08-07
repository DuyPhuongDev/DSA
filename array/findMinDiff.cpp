//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long min = a[a.size()-1]-a[0];
        for(int i=0;i<=n-m;i++){
            long long cur_min = a[i+m-1]-a[i];
            if(cur_min<min) min = cur_min;
        }
        return min;
    }
};

//{ Driver Code Starts.
int main() {
    long long n;
    cin>>n;
    vector<long long> a={11, 13, 7, 5, 13, 12};
    long long x;
    long long m;
    cin>>m;
    Solution ob;
    cout<<ob.findMinDiff(a,n,m)<<endl;
	return 0;
}
// } Driver Code Ends