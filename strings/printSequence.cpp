#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    //code here.
    string s1("");
    for(int i=0; i<S.length();i++){
        char x = toupper(S[i]);
        switch (x){
            case 'A':
                s1+="2";
                break;
            case 'B':
                s1+="22";
                break;
            case 'C':
                s1+="222";
                break;
            case 'D':
                s1+="3";
                break;
                case 'E':
                s1+="33";
                break;
            case 'F':
                s1+="333";
                break;
            case 'G':
                s1+="4";
                break;
            case 'H':
                s1+="44";
                break;
            case 'I':
                s1+="444";
                break;
            case 'J':
                s1+="5";
                break;
            case 'K':
                s1+="55";
                break;
            case 'L':
                s1+="555";
                break;
            case 'M':
                s1+="6";
                break;
            case 'N':
                s1+="66";
                break;
            case 'O':
                s1+="666";
                break;
            case 'P':
                s1+="7";
                break;
            case 'Q':
                s1+="77";
                break;
            case 'R':
                s1+="777";
                break;
            case 'S':
                s1+="7777";
                break;
            case 'T':
                s1+="8";
                break;
            case 'U':
                s1+="88";
                break;
            case 'V':
                s1+="888";
                break;
            case 'W':
                s1+="9";
                break;
            case 'X':
                s1+="99";
                break;
            case 'Y':
                s1+="999";
                break;
            case 'Z':
                s1+="9999";
                break;
            case ' ':
                s1+='0';
                break;
            default:
                break;
        }
    }
    return s1;
}