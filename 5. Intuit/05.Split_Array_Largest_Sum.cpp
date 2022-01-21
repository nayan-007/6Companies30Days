class Solution {
public:
    bool solve(vector<int>& nums,int m, int t){
        int cnt=1;
        int s=0;
        for(auto it:nums){
            if(it>m) return false;
            if(s+it>m){
                cnt++;
                s=it;
            }
            else{
                s+=it;
                
            }
        }
        return cnt<=t;
    }
    int splitArray(vector<int>& nums, int m) {
        int l=INT_MIN,r=0;
        for(auto it:nums){
            r+=it;
            l=max(l,it);
        }
        int ans=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(solve(nums,mid,m)==false){
                l=mid+1;
            }
            else {
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
};
