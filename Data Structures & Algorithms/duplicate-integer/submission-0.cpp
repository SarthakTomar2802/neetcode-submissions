class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int i=0;i<nums.size();i++){
            check.insert(nums[i]);
        }
        if(check.size()<nums.size()){
            return true;
        }
        return false;
    }
};