class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
               mp[nums[i]] = 1;
               continue;
            }
            mp[nums[i]]++;
        }
        vector<pair<int,int>> tp ;
        for(auto it:mp)
        {
            pair<int,int> a;
            a = make_pair(it.second, it.first);
            tp.push_back(a); 
        }
        sort(tp.begin(),tp.end());

        vector<int> result;
        for (int i=0;i<k;i++)
        {
            result.push_back(tp[tp.size()-i-1].second);
        }
        return result;
    }
};
