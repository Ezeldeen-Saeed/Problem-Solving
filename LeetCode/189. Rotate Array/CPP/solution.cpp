class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        for (int i = k; i >= 1; i--) {
            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }

        for (int i : nums) {
            cout << i;
        }
    }
};


// Time Limit Exceeded
