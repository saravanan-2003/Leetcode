class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> temp;
        for (int i = 0; i < nums.size() / 2; i++) {
            int min = INT_MAX, min1 = INT_MAX, locate1, locate2;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < min) {
                    min = nums[i];
                    locate1 = i;
                }
            }
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < min1 && i != locate1) {
                    min1 = nums[i];
                    locate2 = i;
                }
            }
            temp.push_back(min1);
            temp.push_back(min);
            nums[locate1] = 100;
            nums[locate2] = 100;
        }
        return temp;
    }
};