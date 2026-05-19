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
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> heap;

        for(auto it:tp)
        {
            heap.push(it);
            if(heap.size()>k)
            {
                heap.pop();
            }
        }

        vector<int> result;
        for (int i=0;i<k;i++)
        {
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};
