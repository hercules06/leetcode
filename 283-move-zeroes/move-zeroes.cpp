class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[c]=nums[i];
                c++;
            }
        }
        for(c;c<n;c++){
            nums[c]=0;
        }
        
    }
};