class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> freq;
        
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int max=0;

        for(auto x : freq)
        {
            if(x.second > max)
            {
                max=x.second;
            }

        }

        int result=0;
         for(auto x : freq)
        {
            if(x.second == max)
            {
                result +=x.second;
            }

        }

        return result;
    }
};