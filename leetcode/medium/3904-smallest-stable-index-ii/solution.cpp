class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int min = nums[0];
int max = nums[0];

vector<int> suffixMin(nums.size());
suffixMin[nums.size() - 1] = nums.back();

for (int i = nums.size() - 2; i >= 0; i--) {
    suffixMin[i] = std::min(suffixMin[i + 1], nums[i]);
}

for (int i = 0; i < nums.size(); i++) {
    max = std::max(max, nums[i]);

    min = suffixMin[i];

    if (max - min <= k)
        return i;
}

return -1;
    }
};