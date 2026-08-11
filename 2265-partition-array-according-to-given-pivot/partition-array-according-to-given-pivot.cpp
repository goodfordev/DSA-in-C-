class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n, pivot); 
        
        int less = 0;
        int greater = n - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                ans[less++] = nums[i];
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                ans[greater--] = nums[i];
            }
        }

        return ans;
    }
};