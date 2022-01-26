class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int dp[n+2][n+2];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
            for(int x=0,y=i-1;y<n;++x,++y){
                int p=(x+y+n)%2;
                if(p==1) 
                    dp[x+1][y+1] = max(piles[x] + dp[x+2][y+1], piles[y] + dp[x+1][y]);
                else
                    dp[x+1][y+1] = min(-piles[x] + dp[x+2][y+1], -piles[y] + dp[x+1][y]);
                }

         return dp[1][n] > 0;   
    }
};
