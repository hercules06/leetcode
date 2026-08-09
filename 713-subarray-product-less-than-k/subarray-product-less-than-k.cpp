class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int prod=1;
        if(k<=1){
            return 0;
        }
        int c=0;
        int left=0;
        for(int right=0;right<n;right++){
            prod=prod*nums[right];
            while(prod>=k){
                prod=prod/nums[left];
                left++;
            }
            c+=right-left+1;
        }
        return c;
        
    }
};