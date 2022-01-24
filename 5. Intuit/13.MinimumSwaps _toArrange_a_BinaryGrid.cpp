class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        int res=0;
        vector<int> tmp(n);
        for(int i=0 ; i<n ; i++)           
        {
            int j=n-1,cnt=0;
            while(j>=0 and grid[i][j]==0) {cnt++;j--;}
                tmp[i]=cnt;
        }
        for(int i=0 ; i<n ; i++)      
        {
            if(tmp[i]<n-1-i)
            {
                int j=i;
                while(j<n and tmp[j]<n-1-i) j++;
                if(j==n) return -1;
                while(i<j)
                {
                    swap(tmp[j],tmp[j-1]);
                    res++;
                    j--;
                }
            }
        }
        return res;
    }
};
