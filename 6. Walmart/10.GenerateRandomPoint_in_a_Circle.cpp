class Solution {
private:
    double x,y,r;
public:
    Solution(double radius, double x_center, double y_center) {
        x=x_center;
        y=y_center;
        r=radius;
    }
    
    vector<double> randPoint() {
        double rad=(double) rand()/RAND_MAX;
        rad= sqrt(rad)*r;
        double tmp=(double) rand()/RAND_MAX;
        tmp*=360.0;
        return {x+rad*cos(tmp),y+rad*sin(tmp)};
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
