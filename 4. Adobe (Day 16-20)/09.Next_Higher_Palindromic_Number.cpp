#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string nextPalin(string N) { 
        int n=N.size();
        if(n<=3) return "-1";
        
        string res;
        int mid=n/2-1;
        string s=N.substr(0,mid+1);
        int len=s.size();
        int ind=len;
        
        for(int i=len-1;i>0;i--){
            if(s[i]>s[i-1]){
                ind=i-1;
                break;
            }
        }
        
        if(ind==len) return "-1";
        
        for(int i=len-1;i>0;i--){
            if(s[i]>s[ind]){
                swap(s[i],s[ind]);
                break;
            }
        }
        
        reverse(s.begin()+ind+1,s.end());
        res+=s;
        
        if(n%2)
            res+= N[n/2];
            
        reverse(s.begin(),s.end());
        
        res+=s;
        return res;
        
        
    }
};


int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}  
