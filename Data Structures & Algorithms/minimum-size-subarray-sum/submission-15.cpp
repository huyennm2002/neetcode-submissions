class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int begin = 0;
        int end = 0;
        int result = nums.size() + 1;
        while (end <= nums.size()) {
            while (sum >= target) {
                if (end - begin + 1 < result) {
                    result = end - begin + 1;
                }
                sum -= nums[begin];
                begin++;
            } else if (end < nums.size()) {
                sum += nums[end];
                end++;
            }
        }
        if (result < nums.size() + 1) {
            return result;
        } else {
            return 0;
        }
    }
};