class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector <int> result;
        for (int num : nums){
            if (num<pivot){
                result.push_back(num);
            }
        }
        for (int num : nums){
            if (num==pivot){
                result.push_back(num);
            }
        }
        for (int num : nums){
            if (num>pivot){
                result.push_back(num);
            }
        }
        return result;
    }
};