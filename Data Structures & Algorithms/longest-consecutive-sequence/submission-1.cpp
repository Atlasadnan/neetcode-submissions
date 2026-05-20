class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp ;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert(nums[i]);
        }
        int longest=0;
        for(auto it : mp)
        {
            if(mp.find(it-1) == mp.end())
            {
                int length = 1;
                while(mp.find(it + length) != mp.end())
                {
                    length++;
                }
                longest = max(length, longest );
            }
            
        }
        return longest;
    }
};
