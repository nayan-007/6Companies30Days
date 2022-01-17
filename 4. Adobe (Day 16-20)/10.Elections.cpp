#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        map<string,int> mp;
        int mx=0;
        string s;
        vector<string> res;
        
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
            
        for(auto it: mp){
            if(it.second>mx){
                mx=it.second;
                s=it.first;
            }
        }
        
        res.push_back(s);
        res.push_back(to_string(mx));
        return res;
    }
};



int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
