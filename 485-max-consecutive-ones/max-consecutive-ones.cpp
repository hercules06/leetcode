class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
            }
            else{
                maxcount=max(maxcount,c);
                c=0;

            }
        }
        //last else of the loop has not run so taking it oustide loop
        maxcount=max(maxcount,c);
        return maxcount;
    }
};