#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string res="";
        int n=s.size();
        for(auto ch: s){
            if(ch>='A' && ch<='Z'){
                if(res.size()==0)
                    res+=(ch+32);
                else{
                    res+= ' ';
                    res+= (ch+32);
                }
                    
            }
            else
                res+=ch;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends
