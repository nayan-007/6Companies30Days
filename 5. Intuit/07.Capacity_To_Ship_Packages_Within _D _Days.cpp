class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=1;
        int high=0;
        for(auto it: weights) high+=it;
        
        int ans=high;
        
        while(low<=high){
            int mid=low +(high-low)/2;
            
            int day=1;
            int weight=0;
            int flag=1;
            for(auto it: weights){
               if(it>mid) {
                    flag=0;
                    break;
               }
                if(weight+it<=mid){
                    weight+=it;
                }
                else{
                    weight=it;
                    day++;
                }
            }
            if(flag==1 && day<=days){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
            
        }
        return ans;
    }
};
