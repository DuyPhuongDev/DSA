//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
  //Your code here
  string s1;
  for(int i=str.length()-1;i>=0;i--){
      s1+=str[i];
  }
  return s1;
  
}



//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends