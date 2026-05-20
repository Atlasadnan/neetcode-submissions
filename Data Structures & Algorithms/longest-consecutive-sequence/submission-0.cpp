class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
        {
            return 0;
        }
        unordered_set<int> mp;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi= nums[i];
            }
            if(nums[i] < mini)
            {
                mini =nums[i];
            }
            mp.insert(nums[i]);
        }

        vector<int> arr ;
        for(int i=mini;i<=maxi ;i++)
        {
            arr.push_back(i);
            
        }
        vector<int> result ;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i]) != mp.end())
            {
                result.push_back(arr[i]);
            }
        }
        int count =0;
        int  ans =0;
        for(int i=1;i< result.size();i++)
        {
            if( result[i] - result [i-1] == 1 )
            {
                count++ ;
            }
            else {
                ans = max(ans, count); 
                count =0;
            }
        }
        return max(ans,count) +1;
    }
};
