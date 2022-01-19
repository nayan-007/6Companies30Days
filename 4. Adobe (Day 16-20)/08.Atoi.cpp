
#include <bits/stdc++.h>
using namespace std;


class Solution{
    private:
    
    bool isValid(char x){
        int ch=x-'0';
        if(ch<0 or ch>9)
            return false;
        return true;
    }
    
    public:
    
    int atoi(string str) {
        
        int sign=1, i=0, res=0;
        if(str[0]=='-'){
            sign=-1;
            i++;
        }
        
        for(;i<str.size();i++){
            if(isValid(str[i])==false)
                return -1;
            res=res*10+ (str[i]-'0');
        }
        return res*sign;
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
		cout<<ob.atoi(s)<<endl;
	}
}  
