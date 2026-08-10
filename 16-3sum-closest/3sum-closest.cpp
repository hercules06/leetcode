
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int min = INT_MAX;
        int ans = 0;

        for(int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(abs(target - sum) < min) {
                    min = abs(target - sum);
                    ans = sum;
                }

                if(sum < target) {
                    j++;
                }
                else if(sum > target) {
                    k--;
                }
                else {
                    return target;
                }
            }
        }

        return ans;
    }
};

