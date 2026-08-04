class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxare=INT_MIN;
        while(l<=r){
            int width=r-l;
            int min_height=min(height[l],height[r]);
            int area=width*min_height;
            maxare=max(maxare,area);
            if(height[l]<=height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxare;
        
    }
};