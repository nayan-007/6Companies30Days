class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1;
        int high= *max_element(piles.begin(),piles.end());
        
        while(low<high){
            int mid= (low+high)/2;
            int hrs=0;
            
            for(auto it: piles){
                hrs+= it/mid + (it%mid!=0);
            }
            
            if(hrs<=h)
                high=mid;
            else
                low=mid+1;
                
        }
        return high;
    }
};
