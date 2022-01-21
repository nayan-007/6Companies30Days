#include <bits/stdc++.h>
using namespace std;

 
class Solution{
  private:
  
  int solve(int arr[],int n, int sum, int total, vector<vector<int>> &dp){
    if(n==0)
        return abs(total-2*sum);
        
    if(dp[n][sum]!=-1) return dp[n][sum];
    
    dp[n][sum]= min( solve(arr,n-1,sum+arr[n-1],total,dp) , solve(arr,n-1,sum,total,dp));
    
    return dp[n][sum];
  }


  public:
	int minDifference(int arr[], int n)  {
	    int total=accumulate(arr,arr+n,0);
	    vector<vector<int>> dp(n+1,vector<int> (total+1,-1));
	    return solve(arr,n,0,total,dp);
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  
