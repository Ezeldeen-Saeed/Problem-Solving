class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> nev;

        k %= nums.size();
        int starting_index = nums.size() -k;

        for (int x = starting_index; x <= nums.size() -1; x++) {
            nev.push_back(nums.at(x));
        }

        for (int x = 0; x <= starting_index -1; x++) {
            nev.push_back(nums.at(x));
        }


        nums = nev;
    }
};
