class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> seen;
        vector<int> result;

        for(int i=0;i<nums.size();i++)
        {
            int diff= target-nums[i];
            if(seen.find(diff) != seen.end())
            {
                result.push_back(seen[diff]);
                result.push_back(i);

            }

            seen[nums[i]]=i;
        }
        return result;
    }
};