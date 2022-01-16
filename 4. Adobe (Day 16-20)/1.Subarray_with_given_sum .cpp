#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        // Your code here
        vector <int>  ans;
        int curr = arr[0];
        int st = 0;
        int i;
        for(i=1;i<=n;i++)
        {
            while(curr>sum&&st<i-1)
            {
                curr = curr - arr[st];
                st++;
            }
            if(curr==sum)
            {
                ans.push_back(st+1);
                ans.push_back(i);
                return ans;
            }
            if(i<n)
            {
                curr = curr + arr[i];
            }
        }
        ans.push_back(-1);
        return ans;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
} 
